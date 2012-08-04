"""
prototypes.py
Description: Class declarations for various prototypes
Author: Charles Grunwald (Juntalis) <ch@rles.grunwald.me>

This program is free software. It comes without any warranty, to
the extent permitted by applicable law. You can redistribute it
and/or modify it under the terms of the Do What The Fuck You Want
To Public License, Version 2, as published by Sam Hocevar. See
http://sam.zoy.org/wtfpl/COPYING for more details.
"""

__all__ = [ 'Prototype', 'FuncPrototype', 'DataPrototype', 'generate_tab' ]

_counter = 0

class Prototype(object):
	""" Base prototype class. """
	name = None
	start_index = None
	end_index = None
	rettype = None
	dllexport = False

	def __init__(self, **kwargs):
		kwargs.setdefault('dllexport', True)
		kwargs.setdefault('start_index', -1)
		kwargs.setdefault('end_index', -1)
		kwargs.setdefault('rettype', None)
		kwargs.setdefault('name', '')
		self.__dict__.update(kwargs)

	def	valid_indexes(self):
		""" Just a check to make sure that our indexes are valid. """
		return not -1 in [ self.start_index, self.end_index ]

	def __str__(self):
		""" Overloaded in the classes inheriting from this """

	def __unicode__(self):
		""" Just wrap __str__ """
		return unicode(self.__str__())

class FuncPrototype(Prototype):
	""" Prototype for functions exported from the dll. """

	def __init__(self, **kwargs):
		self.args = None
		kwargs.setdefault('args', 'void')
		kwargs.setdefault('rettype', 'void')
		super(FuncPrototype, self).__init__(**kwargs)

	def __str__(self):
		return """
#ifdef %(name)s
#	undef %(name)s
#endif
#define %(name)s ((%(type)s(*)(%(args)s))DynPy_GetAddr(%%d))""" % {
			'name' : self.name, 'type' : self.rettype, 'args' : self.args
		}

class DataPrototype(Prototype):
	""" Prototype for data exported from the dll. """

	def __init__(self, **kwargs):
		kwargs.setdefault('rettype', 'void*')
		super(DataPrototype, self).__init__(**kwargs)

	def __str__(self):
		return """
#ifdef %(name)s
#	undef %(name)s
#endif
#define %(name)s (*(%(type)s(*))DynPy_GetAddr(%%d))""" % {
			'name' : self.name, 'type' : self.rettype
		}

def generate_tab_item(proto):
	""" Generates the .c portion """
	return '{ "%s", NULL },' % proto.name

def generate_tab(proto):
	""" Simply generates a tuple containing the source code for our tab. """
	global _counter
	macro = str(proto) % _counter
	entry = generate_tab_item(proto)
	_counter += 1
	return macro, entry


"""
decorators.py
Description: Random decorators found around the web or written myself.
Author: Charles Grunwald (Juntalis) <ch@rles.grunwald.me>
"""
import functools

__all__ = [ 'memoized' ]

def memoized(obj):
	"""
	Decorator. Caches a function's return value each time it is called.
	If called later with the same arguments, the cached value is returned
	(not reevaluated).

	Found at http://wiki.python.org/moin/PythonDecoratorLibrary#Alternate_memoize_as_nested_functions
	"""
	cache = obj.cache = {}

	@functools.wraps(obj)
	def memoizer(*args, **kwargs):
		if args not in cache: cache[args] = obj(*args, **kwargs)
		return cache[args]
	return memoizer
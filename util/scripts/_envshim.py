# coding=utf8
import sys, os

__all__ = [ 'util_dir', 'src_dir', 'data_dir', 'bin_dir', 'inc_dir', 'data_file', 'quote', 'scripts_dir'
			'root_dir', 'root_file'
		  ]

def _get_util():
	return os.path.dirname(os.path.abspath(os.path.dirname(__file__)))

util_dir = _get_util()
root_dir = os.path.dirname(util_dir)

def _util_dir(*p):
	return os.path.join(*tuple([ util_dir ] + list(p)))

def root_file(*p):
	""" Get a file path relative to the project root. """
	return os.path.join(*tuple([ root_dir ] + list(p)))

# Get most of the local subfolders in our util root.
bin_dir = _util_dir('bin')
src_dir = _util_dir('src')
inc_dir = _util_dir('include')
scripts_dir = _util_dir('scripts')
data_dir = _util_dir('data')

def quote(p):
	""" Quote a file path. """
	return '"%s"' % p

def data_file(*p):
	""" Assemble a quoted data file path. """
	return os.path.join(*tuple([ data_dir ] + list(p)))

# Add the lib dir to our python path and add the bin dir to our PATH
sys.path.insert(0, _util_dir('lib'))
os.environ['PATH'] = '%s;%s' % (bin_dir, os.environ['PATH'])

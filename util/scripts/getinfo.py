import sys
from ctypes import *
from ctypes.wintypes import HANDLE, DWORD
buffer = create_string_buffer(260)
GetModuleFileName = windll.kernel32.GetModuleFileNameA
GetModuleFileName.restype = DWORD
GetModuleFileName.argtypes = [ HANDLE, c_char_p, DWORD ]
GetModuleFileName(sys.dllhandle, buffer, 260)
vi = sys.version_info
result = [ '%d%d' % (vi.major,vi.minor), str(sys.api_version), sys.prefix ]
result += [ buffer.value ]
sys.stdout.write(';'.join(result))
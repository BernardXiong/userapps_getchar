# RT-Thread building script for component

from building import *

cwd = GetCurrentDir()
src = Glob('*.c')
CPPPATH = [cwd]

CPPDEFINES = [
    'HAVE_CCONFIG_H',
]
group = DefineGroup('getchar', src, depend = [''], CPPPATH = CPPPATH, CPPDEFINES = CPPDEFINES)

Return('group')

"""
SCons entry point
"""

import os
import sys
import subprocess
from pathlib import Path

def main():

    git_show_toplevel = subprocess.run('git rev-parse --show-toplevel'.split(),
                                       capture_output = True,
                                       encoding='utf-8')
    project_root = git_show_toplevel.stdout.rstrip()

    print(f'Project root is {project_root}')

    env = Environment(CCCOM='g++',
                      CPPPATH= [str(Path('include').resolve())]
                      )

    Export('env')

    # Architectures
    child_arch = [ 'arch_a' ]

    # Build child arches
    for arch in child_arch:
        Export('arch')
        SConscript(f'#/{arch}/SConscript',
                   duplicate=False)

main()

"""
SCons entry point
"""

import os
import sys
import subprocess


git_show_toplevel = subprocess.run(
    "git rev-parse --show-toplevel".split(), capture_output=True, encoding="utf-8"
)
project_root = git_show_toplevel.stdout.rstrip()

print(f"Project root is {project_root}")

env = Environment(CCCOM="g++", CPPPATH=["#/include"])

# Architectures
child_arch = ["arch_a"]
platforms = ["platform_a", "platform_b"]


# Build child arches
for arch in child_arch:
    for platform in platforms:
        var_dir = f"#/build/{arch}-{platform}"
        print("SConscript:src/SConscript var_dir={var_dir}")
        SConscript(
            "src/SConscript",
            variant_dir=var_dir,
            exports=["arch", "platform", "env"],
        )

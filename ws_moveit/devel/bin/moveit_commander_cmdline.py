#!/usr/bin/env python
# creates a relay to a python script source file, acting as that file.
# The purpose is that of a symlink
with open("/home/p/peth8881/robotics/ws_moveit/src/moveit_commander/bin/moveit_commander_cmdline.py", 'r') as fh:
    exec(fh.read())

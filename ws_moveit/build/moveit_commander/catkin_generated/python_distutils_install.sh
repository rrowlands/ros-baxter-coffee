#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/p/peth8881/robotics/ws_moveit/src/moveit_commander"

# todo --install-layout=deb per platform
# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/p/peth8881/robotics/ws_moveit/install/lib/python2.7/dist-packages:/home/p/peth8881/robotics/ws_moveit/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/p/peth8881/robotics/ws_moveit/build" \
    "/usr/bin/python" \
    "/home/p/peth8881/robotics/ws_moveit/src/moveit_commander/setup.py" \
    build --build-base "/home/p/peth8881/robotics/ws_moveit/build/moveit_commander" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/p/peth8881/robotics/ws_moveit/install" --install-scripts="/home/p/peth8881/robotics/ws_moveit/install/bin"

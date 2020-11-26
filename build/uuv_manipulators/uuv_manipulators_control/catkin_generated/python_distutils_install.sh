#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ivar/uuv_ws/src/uuv_manipulators/uuv_manipulators_control"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ivar/uuv_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ivar/uuv_ws/install/lib/python2.7/dist-packages:/home/ivar/uuv_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ivar/uuv_ws/build" \
    "/usr/bin/python2" \
    "/home/ivar/uuv_ws/src/uuv_manipulators/uuv_manipulators_control/setup.py" \
     \
    build --build-base "/home/ivar/uuv_ws/build/uuv_manipulators/uuv_manipulators_control" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/ivar/uuv_ws/install" --install-scripts="/home/ivar/uuv_ws/install/bin"
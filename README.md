Terrainator
=======================

## Dependencies

 * OpenGL and GLUT.
 * Cmake.
 * C++ compiler with C++11 support.
 * Other dependencies are git submodules (glfw).

## Build
Install Eigen on your computer (download the latest version here: eigen.tuxfamily.org/).
```
'cd path/to/unzippedEigen'
'mkdir build'
'cd build'
'cmake ..'
'make install'
```

Clone this repository and update the git submodules (`git submodule update`).

Just run `cmake` to build the Makefile, and then `make`. The executable will be
placed inside `bin` folder.

## Commands

## Acknowledgments
 * [CMake](http://cmake.org) - cross-platform open-source build system.
 * [GLFW](http://www.glfw.org) - library for creating windows with OpenGL.


Terrainator
=======================

## Dependencies

 * OpenGL and GLUT.
 * Cmake.
 * Eigen.
 * C++ compiler with C++11 support.
 * Other dependencies are git submodules (glfw).

## Build
Install [Eigen](http://eigen.tuxfamily.org/)) on your computer.
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
 * [Eigen](http://eigen.tuxfamily.org/) - library for linear algebra. 


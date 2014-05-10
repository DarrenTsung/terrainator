cmake_minimum_required (VERSION 2.8)
project (Untitled)
set(VERSION "0.1.0")

# Required libraries in lib
# add_subdirectory(lib/entityx EXCLUDE_FROM_ALL)
add_subdirectory(lib/glfw EXCLUDE_FROM_ALL)

# use GLUT
find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIR})

# include paths
include_directories(${GLUT_INCLUDE_DIRS} lib/glfw/include src)
# include_directories(${GLUT_INCLUDE_DIRS} lib/glfw/include lib/entityx src)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin/")
file(GLOB_RECURSE untitled_SOURCES "src/*.cpp")

add_executable(Untitled WIN32 MACOSX_BUNDLE ${untitled_SOURCES})

set(CMAKE_CXX_FLAGS "-std=c++11 -stdlib=libc++")
target_link_libraries(Untitled glfw ${GLFW_LIBRARIES} ${GLUT_LIBRARIES})
# target_link_libraries(entityx glfw ${GLFW_LIBRARIES} ${GLUT_LIBRARIES})

cmake_minimum_required(VERSION 3.5)

# Project name and version
project(raylib_project VERSION 1.0)

# Set the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Set the executable name
set(EXECUTABLE_NAME raylib_project)

# Specify the source directory
set(SRC_DIR src)

# Add the executable
add_executable(${EXECUTABLE_NAME} ${SRC_DIR}/main.c)

# Specify where to find the Raylib headers and libraries
include_directories(raylib/src)
link_directories(raylib/build)

# Link the Raylib library and additional required libraries
if (WIN32)
    target_link_libraries(${EXECUTABLE_NAME} raylib m pthread winmm gdi32)
else()
    target_link_libraries(${EXECUTABLE_NAME} raylib m pthread dl rt X11)
endif()

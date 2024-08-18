cmake_minimum_required(VERSION 3.5)

# Project name and version
project(raylib_project VERSION 1.0)

# Set the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Add the Raylib subdirectory
add_subdirectory(raylib)  # This builds Raylib from source

# Set the executable name
set(EXECUTABLE_NAME raylib_project)

# Specify the source directory
set(SRC_DIR src)

# Add the executable
add_executable(${EXECUTABLE_NAME} ${SRC_DIR}/main.c)

# Include Raylib headers
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/raylib/src)

# Link Raylib and other system libraries to your executable
target_link_libraries(${EXECUTABLE_NAME} PRIVATE raylib)

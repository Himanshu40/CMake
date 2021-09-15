# EP-1
* ### The very basics

## Synopsis
```cmake
# Sets the minimum required version of cmake for a project.
cmake_minimum_required(VERSION 3.21.1)

# Sets the name of the project, and stores it in the variable "${PROJECT_NAME}".
# VERSION 1.0 gives the version number to the project.
project(EP1-Basics VERSION 1.0)

# Specify the C++ standard and requirement to True
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add an executable to the project using the specified source files.
# "run" is the name of the executable file & "main.cpp" is the source file.
# Instead of "run", we can specify variable ${PROJECT_NAME} or any too.
add_executable(run main.cpp)
```
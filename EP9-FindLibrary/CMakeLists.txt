cmake_minimum_required(VERSION 3.21.1)

project(EP9-FindLibrary VERSION 1.0)

find_library(myglewlib glew NAMES GLEW REQUIRED)

# if (${myglewlib})
#     message(FATAL_ERROR "no glew found. Install glew first!!!")
# else()
#     message(STATUS "glew found at ${myglewlib}")
# endif()

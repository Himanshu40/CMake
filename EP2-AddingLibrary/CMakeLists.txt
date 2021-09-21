cmake_minimum_required(VERSION 3.21.1)

project(EP2-AddingLibrary VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Declare a new library
add_library(
    Adder
    adder.cpp
)

add_executable(run main.cpp)

# Link run with Adder library
target_link_libraries(run PUBLIC Adder)
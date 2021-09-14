cmake_minimum_required(VERSION 3.21.1)

project(AddingLibrary VERSION 1.0)

# Declare a new library
add_library(
    Adder
    adder.h
    adder.cpp
)

add_executable(run main.cpp)

# Link run with Adder library
target_link_libraries(run PRIVATE Adder)
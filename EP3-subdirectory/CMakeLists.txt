cmake_minimum_required(VERSION 3.21.1)

project(EP3-subdirectory VERSION 1.0)

add_executable(run main.cpp)

add_subdirectory(Adder)

target_include_directories(run PUBLIC Adder)

target_link_directories(run PRIVATE Adder)

target_link_libraries(run PRIVATE adder)
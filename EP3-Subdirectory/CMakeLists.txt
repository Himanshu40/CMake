cmake_minimum_required(VERSION 3.21.1)

project(EP3-Subdirectory VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_executable(run main.cpp)

add_subdirectory(Adder)

target_include_directories(run PUBLIC Adder)

target_link_directories(run PRIVATE Adder)

target_link_libraries(run PRIVATE adder)
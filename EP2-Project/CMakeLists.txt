cmake_minimum_required(VERSION 3.21.1)

project(EP2-Project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Instead of variable ${PROJECT_NAME}, I can write EP1 or run or any too.
add_executable(run main.cpp)

add_subdirectory(Adder)

target_include_directories(run PUBLIC Adder)

target_link_directories(run PRIVATE Adder)

target_link_libraries(run adder)

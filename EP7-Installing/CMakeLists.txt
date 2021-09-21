cmake_minimum_required(VERSION 3.21.1)

project(EP7-Installing VERSION 1.0)

add_executable(Installing main.cpp)

add_subdirectory("${PROJECT_SOURCE_DIR}/Adder")

target_link_libraries(Installing PUBLIC Adder)

target_include_directories(Installing PUBLIC
                           "${PROJECT_SOURCE_DIR}/Adder")

install(TARGETS Installing DESTINATION bin)
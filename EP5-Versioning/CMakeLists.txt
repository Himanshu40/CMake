cmake_minimum_required(VERSION 3.21.1)

project(EP5_Versioning VERSION 1.0)

configure_file(VersionConfig.h.in VersionConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

include_directories(${CMAKE_BINARY_DIR})
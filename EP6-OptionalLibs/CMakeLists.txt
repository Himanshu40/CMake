cmake_minimum_required(VERSION 3.21.1)

project(EP6-OptionalLibs VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adder use logic
option(USE_ADDER "Use user-defined adder" ON)

if(USE_ADDER)
    add_subdirectory(Adder)
    list(APPEND EXTRA_LIBS Adder)
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/Adder")
endif()

configure_file(OptionalLibsConfig.h.in OptionalLibsConfig.h)

add_executable(run main.cpp)

target_link_libraries(run PUBLIC ${EXTRA_LIBS})

target_include_directories(run PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           ${EXTRA_INCLUDES}
                           )
cmake_minimum_required(VERSION 3.21.1)

project(EP4-Submodules VERSION 1.0)

add_executable(run main.cpp)

add_subdirectory(Adder)

# Download all the submodules
find_package(GIT QUIET)
if (GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if (GIT_SUBMODULE)
        message(STATUS "Submodule update")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout submodules.")
        endif()
    endif()
endif()

# Check all the submodules are exists or not
if (NOT EXISTS "${PROJECT_SOURCE_DIR}/external/glfw/CMakeLists.txt")
    message(FATAL_ERROR "The glfw submodules was not downloaded! GIT_SUBMODULE was turned off or failed.")
endif()


add_subdirectory(external/glfw)

target_include_directories(run 
    PUBLIC Adder 
    PUBLIC external/glfw/include
)

target_link_directories(run 
    PRIVATE Adder
    PRIVATE external/glfw/src
)

target_link_libraries(run PRIVATE adder glfw)
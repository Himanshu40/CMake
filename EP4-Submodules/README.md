# EP-4
* ### Submodules
* ### Options
* ### Variables

## Configure and build with CMake
```shell
./configure.sh
./build.sh
./run.sh
```

## Synopsis
```cmake
# Find an external project, and load its settings.
# The "QUIET" option disables informational messages, including those indicating that the package cannot be found if it is not "REQUIRED".
find_package(GIT QUIET)

# Provides an option for the user to select as "ON" or "OFF".
# It grabs the submodules if it is turned "ON".
option(GIT_SUBMODULE "Check submodules during build" ON)

# Log a message.
message(STATUS "Submodule update")

# Execute one or more child processes.
# "COMMAND" - A child process command line. CMake executes the child process using operating system APIs directly.
# "WORKING_DIRECTORY" - The named directory will be set as the current working directory of the child processes.
# "RESULT_VARIABLE" - The variable will be set to contain the result of last child process.
# This will be an integer return code from the last child or a string describing an error condition.
execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
```
# EP-2
* ### Adding Library

## Synopsis
```cmake
# Add a library to the project using the specified source files.
add_library(
    Adder
    adder.cpp
    )

# Specify libraries to use when linking a given target.
# The named "<target>" must have been created by a command such as "add_executable()" or "add_library()".
target_link_libraries(run PUBLIC Adder)
```
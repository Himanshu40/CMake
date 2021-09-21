# EP-3
* ### Multiple Files
* ### Libraries
* ### Sub-Directory

## Directory structure
```
├── Adder
│   ├── adder.cpp
│   ├── adder.h
│   └── CMakeLists.txt
├── CMakeLists.txt
├── main.cpp
└── README.md
```
## Synopsis
* ### EP3-Subdirectory/CMakeLists.txt
```cmake
# Adds a subdirectory to the build.
# The source_dir specifies the directory in which the source CMakeLists.txt and code files are located.
add_subdirectory(Adder)

# Add include directories to a target.
# Specifies include directories to use when compiling a given target.
# The named "<target>" must have been created by a command such as "add_executable()" or "add_library()".
target_include_directories(run PUBLIC Adder)
```
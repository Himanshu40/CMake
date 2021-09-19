# EP-6
* ### Making Libs optional

## Synopsis
```
# Sets the variable "USE_ADDER" to "ON".
# It can be turned "OFF" by passsing command during cmake.
# cmake -DUSE_ADDER=OFF -S . -B build/
option(USE_ADDER "Use user-defined adder" ON)

# It create new values for the list within the current CMake variable scope.
# The use of the variable "EXTRA_LIBS" to collect up any optional libraries to later be linked into the executable. 
list(APPEND EXTRA_LIBS Adder)

# The variable "EXTRA_INCLUDES" is used for optional header files.
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/Adder")
```
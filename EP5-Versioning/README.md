# EP-5
* ### Versioning Source Code

## Synopsis

```cmake
# Copies an "<input>" file to an "<output>" file and substitutes
# variable values referenced as "@VAR@" or "${VAR}" in the input
# file content.
configure_file(VersionConfig.h.in VersionConfig.h)

# This is the full path to the top level of the current CMake build tree.
${CMAKE_BINARY_DIR}
```
# EP-7
* ### Installing

## Synopsis
```cmake
# The executable "Installing" will be stored in "/usr/local/bin"
install(TARGETS Installing DESTINATION bin)

# The library "Adder" will be stored in "usr/local/lib"
install(TARGETS Adder DESTINATION lib)

# The header file "Adder.h" will be stored in "usr/local/include"
install(FILES Adder.h DESTINATION include)
```
add_library(Adder Adder.cpp)

install(TARGETS Adder DESTINATION lib)
install(FILES Adder.h DESTINATION include)
#include <iostream>
#include <OptionalLibsConfig.h>
#ifdef USE_ADDER
#   include "Adder.h"
#endif

int main() {
    std::cout << "Hello world!!!" << std::endl;

    #ifdef USE_ADDER
        std::cout << "Using Adder library: " << add(12.5f, 52.36f) << std::endl;
    #else
        std::cout << "Not using Adder library: " << 12.5f + 52.36f << std::endl;
    #endif

    return 0;
}

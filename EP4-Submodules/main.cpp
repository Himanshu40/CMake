#include <iostream>
#include <GLFW/glfw3.h>
#include "adder.h"


int main() {
    std::cout << "Hello world!!!" << std::endl;
    std::cout << add(12.5f, 52.36f) << std::endl;

    GLFWwindow *window;

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );

    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    return 0;
}

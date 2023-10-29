#include <core/Window.h>
#include <iostream>

void Window::initialize(){
    if(!glfwInit()){
        std::cout << "GLFW does not work!\n";
        return;
    }
}
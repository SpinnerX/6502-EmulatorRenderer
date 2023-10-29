#pragma once
#include <GLFW/glfw3.h>
#include <string>

/**
 * 
 * Windows
 * Helper class for implementing the window.
 * 
*/

class Window{
    Window() = default;


    void initialize();

    // Setting parameters for how we want to set the window
    void setFixedWidth(int w);
    void setFixedHeight(int h);
    int width() const;
    int height() const;
    std::string name() const;

private:
    int width;
    int height;
    std::string name;
};
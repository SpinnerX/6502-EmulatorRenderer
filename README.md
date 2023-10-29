# 6502 Emulator Renderer

## Overview
The renderer that will be part of the 6502 Emulator. This renderer will have tools and \
basically to interact with the emulatir via interface visually. Such as features would \
also include a memory viewer to show if data are being modified correctly, and have a \
way at checking for correctness that may be difficult to look for in the test cases \
that we have integrated into both projects.

##  Goal
Goal for this project is to have fun! \
This project is an external project allowing to have a creative way at designing, implementing \
very specific tasks for the renderer. Such as applying distributed systems, in the context that \
what if we have multiple windows simultaneously receiving, and sending data to the emulator. \
These are considerations when looking into this project.

## Plan (In-Development)
# 1. Implement UI
This is just the first part, which is another learning curve. Where I will take a look into how to use OpenGL \
for  rendering, windows, widgets, event handlers, etc. Using concepts of graphics programming into use. \
While also maintaining the goal of easier use, or even generic thing that calls a thing. In which, should work. \
At least that'll be the idea for right now (lol), as I think more about it. \
    1.1. Learn OpenGL such as textures, shaders, VertexBuffers, etc. \
    1.2. Applying different rendering techniques and algorithms for efficiency \
         in rendering graphics (quadtrees, etc.) \

2. Widgets, Interface, Graphics Development
    2.1. Creating widgets
        - Widgets should be audo-adjustable
        - Allowing for drag and drop options
        - Having a system in place for the even handlers \
            to know which widget we are clicking, or activating. \
        - The idea for event handlers is having a way of \
            identifying which widgets to activate. \
        NOTE: We may want to try handling this first \
              in finding out unique identifiers of \
              widgets in the UI being activated. \

    2.2. Built-in system \
        -  Having some sort of built-in system for handling widgets \
        - Manager for handling the threading and parallel computing stuff. \
        - Keeping in mind that the goal of these managers are not just to manage \
            other threads and objects, but also to make sure we are not using too \
            much resources. \
        - Possible usage to also help find any bugs (that can effect latency) \
            when receiving data, since the goal is to minimize amount of latency \
            when sending/receiving data. \
        - Using these built-in system into the application to also handle hovering \
            effects when the users mouse is hovering over specific widgets.

    2.3. Widgets sending data to multiple windows \
        - Idea is what if we have one mainwindow \
          the mainwindow sends data to multiple windows. \
        - Possible to utilize in testing how data are \
          being sent. Possible testing for latency when \
          sending and receiving data to those multiple windows. \
        - Before doing the drag and drop, should definitely make \
            sure that the hovering effects are working properly. \
        - Drag and Drop feature, allowing users to drag things into \
            the UI. The idea for this is for the Detached Windows in 2.4. \

    2.4. Detached Windows (Subwindows) \
        - When creating detached windows from the mainwindow
        - Think of it has the mainwindow being the canvas, and \
            thhe detached window as a floating window part of the \
            mainwindow. \
        - Meaning that when we have a detached window, the mainwindow \
            will already have an idea that the four corners top, right \
            left, and bottom. If there is a detached window added to the \
            mainwindow, then we can do some form of check for hovering \
            effect.

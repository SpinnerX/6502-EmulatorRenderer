cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME 6502.EmulatorRenderer)
project(${PROJECT_NAME} VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(PROJECT_INCLUDE_DIR 6502Renderer)

include_directories(
    ${PROJECT_SOURCE_DIR}/${PROJECT_INCLUDE_DIR}/include
)

# Better way instead of GLOBBING 
set(
    all_src
    ${PROJECT_SOURCE_DIR}/${PROJECT_INCLUDE_DIR}/src/main.cpp
)

add_executable(
    ${PROJECT_NAME}
    ${all_src}
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

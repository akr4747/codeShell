cmake_minimum_required(VERSION 2.8)
set (EXE_NAME codeShell)
set (CMAKE_BUILD_TYPE Debug)
project(${EXE_NAME})
link_libraries(GLEW GL GLU glut)
add_executable(${EXE_NAME} Main.cpp Cli.cpp StringExt.cpp)

add_custom_target(run COMMAND ./${EXE_NAME})

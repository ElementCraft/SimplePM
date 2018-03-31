cmake_minimum_required(VERSION 3.9)
project(EasyPM)

include_directories(src E:\\SDK\\boost)

link_directories(E:\\SDK\\boost\\lib)

set(CMAKE_CXX_STANDARD 17)

add_executable(EasyPM main.cpp src/Game.cpp src/Game.h)
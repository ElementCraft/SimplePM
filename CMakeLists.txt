cmake_minimum_required(VERSION 3.9)
project(EasyPM)

include_directories(src E:\\SDK\\boost)

link_directories(E:\\SDK\\boost\\lib)

set(CMAKE_CXX_STANDARD 17)

add_executable(EasyPM main.cpp src/Game.cpp src/Game.h src/Map.cpp src/Map.h src/Unit.cpp src/Unit.h src/Player.cpp src/Player.h src/Npc.cpp src/Npc.h src/Tile.cpp src/Tile.h src/Area.cpp src/Area.h src/Resource.cpp src/Resource.h)

add_custom_command(TARGET EasyPM PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${PROJECT_SOURCE_DIR}/data" "${PROJECT_BINARY_DIR}/data")
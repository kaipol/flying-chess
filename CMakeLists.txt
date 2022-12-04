cmake_minimum_required(VERSION 3.24)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c)
target_link_libraries(untitled mingw32)
target_link_libraries(untitled SDL2main)
target_link_libraries(untitled SDL2)
target_link_libraries(untitled SDL2_image)
target_link_libraries(untitled SDL2_ttf)
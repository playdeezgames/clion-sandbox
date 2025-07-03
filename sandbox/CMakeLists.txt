cmake_minimum_required(VERSION 3.31)
project(sandbox)

set(CMAKE_CXX_STANDARD 26)
set(SOURCES
        src/main.cpp
        src/main_menu.cpp
        include/main_menu.h
        src/confirm_quit.cpp
        include/confirm_quit.h
        include/utility.h
        src/utility.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
include_directories(include)

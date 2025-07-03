cmake_minimum_required(VERSION 3.31)
project(sandbox)

set(CMAKE_CXX_STANDARD 26)
set(SOURCES
        src/main.cpp
        src/ui/main_menu.cpp
        src/ui/confirm_quit.cpp
        src/ui/utility.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
include_directories(include)

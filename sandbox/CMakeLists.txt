cmake_minimum_required(VERSION 3.31)
project(sandbox)

set(CMAKE_CXX_STANDARD 26)
set(SOURCES
        src/main.cpp
        src/ui/MainMenuState.cpp
        src/ui/ConfirmState.cpp
        src/ui/utility.cpp
        src/data/WorldData.cpp
        src/ui/EmbarkState.cpp
        src/world/World.cpp
        src/ui/NeutralState.cpp
        src/ui/NavigationState.cpp
        src/ui/GameMenuState.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
include_directories(include)

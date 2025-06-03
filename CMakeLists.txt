cmake_minimum_required(VERSION 3.31)
project(untitled2)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled2 main.cpp
        Character.cpp
        Character.h
        cmake-build-debug/Player.cpp
        cmake-build-debug/Player.h
        cmake-build-debug/Enemy.cpp
        cmake-build-debug/Enemy.h)

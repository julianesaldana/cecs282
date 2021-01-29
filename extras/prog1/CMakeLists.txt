cmake_minimum_required(VERSION 3.17)
project(prog1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(prog1
        Can.cpp
        Can.h
        main.cpp)

cmake_minimum_required(VERSION 3.17)
project(prog1)

set(CMAKE_CXX_STANDARD 14)

add_executable(prog1 main.cpp Card.cpp Card.h Deck.cpp Deck.h)
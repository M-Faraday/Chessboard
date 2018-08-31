cmake_minimum_required(VERSION 3.10)
project(Chessboard)

set(CMAKE_CXX_STANDARD 11)

add_executable(Chessboard main.cpp Chessboard.cpp Chessboard.h Node.h Stack.h)
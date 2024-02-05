cmake_minimum_required(VERSION 3.26)
project(chapter14MITest)

set(CMAKE_CXX_STANDARD 11)

add_executable(chapter14MITest main.cpp
        worker0.h
        worker0.cpp
        workermi.h
        workermi.cpp)

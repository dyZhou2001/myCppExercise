cmake_minimum_required(VERSION 3.26)
project(simpleTextSearch)

set(CMAKE_CXX_STANDARD 23)

add_executable(simpleTextSearch main.cpp
        TextQuery.h
        TextQuery.cpp)

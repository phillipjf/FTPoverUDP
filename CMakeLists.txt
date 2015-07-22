cmake_minimum_required(VERSION 3.2)
project(Proj1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Client.cpp
    Server.cpp
    Socket.cpp
    Socket.h)

add_executable(Proj1 ${SOURCE_FILES})
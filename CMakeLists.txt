cmake_minimum_required(VERSION 3.25)

project(OpenTime)

set(CMAKE_CXX_STANDARD 23)

set(SOURCE_FILES
        main.cpp
)

add_executable(simple_example ${SOURCE_FILES})
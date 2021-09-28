cmake_minimum_required(VERSION 3.12)

project(HelloWorldProject VERSION 1.0.0)

add_library(
    HelloLibrary
    hello-library.hpp
    hello-library.cpp
)

add_executable(HelloApp main.cpp)

target_link_libraries(HelloApp PRIVATE HelloLibrary)
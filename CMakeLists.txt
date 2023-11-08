cmake_minimum_required(VERSION 3.5)

project(PySTask)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

add_subdirectory(STask)

add_executable(PySTaskTest test.cpp)

target_link_libraries(PySTaskTest
    SSTask
)

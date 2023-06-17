cmake_minimum_required(VERSION 3.10)
project(Task3)

include_directories(DynLib)
add_executable(DynByeEx main.cpp)
add_subdirectory(DynLib)
target_link_libraries(DynByeEx DynLib)
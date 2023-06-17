cmake_minimum_required(VERSION 3.10)
project(DynLib)

set(SOURCE_LIB dyn_bye.h dyn_bye.cpp)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(DynLib SHARED ${SOURCE_LIB})
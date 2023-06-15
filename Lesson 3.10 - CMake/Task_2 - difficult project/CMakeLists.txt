cmake_minimum_required(VERSION 3.10)
project(Task2_diff_proj)
set(SOURCE_FILE main.cpp EquilateralTriangle.cpp EquilateralTriangle.h Figure.cpp Figure.h IsoscelesTriangle.cpp IsoscelesTriangle.h Parallelogram.cpp Parallelogram.h print_info.cpp print_info.h Quadrangle.cpp Quadrangle.h Rectang.cpp Rectang.h RightTriangle.cpp RightTriangle.h Rombus.cpp Rombus.h Square.cpp Square.h Triangle.cpp Triangle.h)
add_executable(Task2_ex ${SOURCE_FILE})
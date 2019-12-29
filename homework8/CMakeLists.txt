cmake_minimum_required(VERSION 3.15)
project(homework8)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework8 main.cpp Shape.cpp Shape.h TwoDimensionalShape.cpp TwoDimensionalShape.h ThreeDimensionalShape.cpp ThreeDimensionalShape.h Circle.cpp Circle.h Triangle.cpp Triangle.h Sphere.cpp Sphere.h Tetrahedron.cpp Tetrahedron.h)
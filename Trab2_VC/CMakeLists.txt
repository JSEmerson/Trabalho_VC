cmake_minimum_required(VERSION 3.7)
project(Trab2_VC)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Vertice.h Vertice.cpp Celula.h Celula.cpp Aresta.h Aresta.cpp Malha.h Malha.cpp)
add_executable(Trab2_VC ${SOURCE_FILES})
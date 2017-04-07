cmake_minimum_required(VERSION 3.6)
project(Eq)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp sword.cpp sword.h rng.cpp rng.h weapon.cpp weapon.h Item.cpp Item.h)
add_executable(Eq ${SOURCE_FILES})
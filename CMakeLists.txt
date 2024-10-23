cmake_minimum_required(VERSION 3.29)
project(gradeCalculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(gradeCalculator main.cpp
        gc_askGrade.cpp
        gc_error.cpp
        gc_getSumGradeOutput.cpp
)

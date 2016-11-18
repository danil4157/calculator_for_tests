cmake_minimum_required(VERSION 2.8)

project (calculator_for_tests)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(HEADERS ${PROJECT_SOURCE_DIR}/include/Calculator.hpp)
set(HEADERS ${PROJECT_SOURCE_DIR}/include/Catch.hpp)
set(SOURCES ${PROJECT_SOURCE_DIR}/sources/Calculator.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library (${PROJECT_NAME} STATIC ${SOURCES})

add_subdirectory(tests)
add_subdirectory(execute)

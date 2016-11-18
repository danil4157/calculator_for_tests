cmake_minimum_required(VERSION 2.8)

project (calculator_for_tests_example)
set(SOURCES main.cpp)
add_executable (${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} calculator_for_tests)

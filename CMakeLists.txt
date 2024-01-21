cmake_minimum_required(VERSION 3.27)

set(PROJECT_NAME cpp-examples)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)

file(
    GLOB_RECURSE
    SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/core/source/*.c
    ${CMAKE_CURRENT_LIST_DIR}/core/source/*.cpp
)

file(
    GLOB_RECURSE
    HEADERS
    ${CMAKE_CURRENT_LIST_DIR}/core/header/*.h
    ${CMAKE_CURRENT_LIST_DIR}/core/header/*.hpp
    ${CMAKE_CURRENT_LIST_DIR}/core/header/*.inl
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/core/header)

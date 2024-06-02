cmake_minimum_required(VERSION 3.10)

project(api)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_PATH ${CMAKE_SOURCE_DIR}/../../libraries/mysql-queries)

add_definitions(-DPROJECT_PATH="${PROJECT_PATH}")

include_directories(${CMAKE_SOURCE_DIR}/../../libraries/mysql-queries)
include_directories(/opt/homebrew/Cellar/python@3.12/3.12.3/Frameworks/Python.framework/Versions/3.12/include/python3.12)

link_directories(/opt/homebrew/Cellar/python@3.12/3.12.3/Frameworks/Python.framework/Versions/3.12/lib)

if(NOT TARGET mysql-queries)
    add_subdirectory(${CMAKE_SOURCE_DIR}/../../libraries/mysql-queries ${CMAKE_BINARY_DIR}/mysql-queries)
endif()

add_executable(api main.cpp)

target_link_libraries(api mysql-queries python3.12)

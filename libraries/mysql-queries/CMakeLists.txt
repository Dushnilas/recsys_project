cmake_minimum_required(VERSION 3.10)

project(mysql-queries)

set(CMAKE_CXX_STANDARD 17)

add_library(mysql-queries STATIC mysql-queries.cpp)

target_include_directories(mysql-queries PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

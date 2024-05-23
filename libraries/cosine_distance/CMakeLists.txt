cmake_minimum_required(VERSION 3.27)

add_library(cosine_distance STATIC cosine_distance.cpp)

target_include_directories(cosine_distance PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

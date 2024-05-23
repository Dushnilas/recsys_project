cmake_minimum_required(VERSION 3.27)

add_library(word_to_vec STATIC word_to_vec.cpp)

target_include_directories(word_to_vec PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

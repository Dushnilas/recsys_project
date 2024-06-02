cmake_minimum_required(VERSION 3.10)

project(Recommendation_system)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_PATH /Users/senya/CLionProjects/recsys_project/libraries/mysql-queries)

add_definitions(-DPROJECT_PATH="${PROJECT_PATH}")

add_subdirectory(libraries)
add_subdirectory(src)

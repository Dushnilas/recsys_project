cmake_minimum_required(VERSION 3.10)

project(Recommendation_system)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libraries/mysql-queries)
add_subdirectory(src/api)

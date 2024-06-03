add_library(user_and_dev STATIC users/user_and_dev.cpp)
add_library(movies STATIC movie/movies.cpp)
add_library(logger STATIC logger/logger.cpp)

target_include_directories(user_and_dev PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(movies PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
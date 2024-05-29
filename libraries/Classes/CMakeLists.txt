add_library(user_and_dev STATIC user_and_dev.cpp)
add_library(movies STATIC movies.cpp)

target_include_directories(user_and_dev PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(movies PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

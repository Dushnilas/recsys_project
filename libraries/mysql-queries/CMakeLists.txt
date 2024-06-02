add_library(mysql-queries STATIC mysql-queries.cpp)

target_include_directories(mysql-queries PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

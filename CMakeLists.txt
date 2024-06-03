cmake_minimum_required(VERSION 3.10)

project(Mase_Cinema_Project VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories for backend libraries
add_subdirectory(src/backend/libraries/Classes)
add_subdirectory(src/backend/libraries/mysql-queries)

# Add subdirectory for the Qt project
add_subdirectory(src/qt)

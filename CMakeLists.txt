cmake_minimum_required(VERSION 3.10)

project(Recommendation_system)

set(CMAKE_CXX_STANDARD 17)

include_directories(/opt/homebrew/Cellar/python@3.12/3.12.3/Frameworks/Python.framework/Versions/3.12/include/python3.12)

link_directories(/opt/homebrew/Cellar/python@3.12/3.12.3/Frameworks/Python.framework/Versions/3.12/lib)

add_executable(python python/main.cpp)

target_link_libraries(python python3.12)






##"/opt/homebrew/Cellar/python@3.12/3.12.3/Frameworks/Python.framework/Versions/3.12/include/python3.12/Python.h"

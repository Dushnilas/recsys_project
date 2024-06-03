set(PROJECT_PATH libraries/mysql-queries)

add_definitions(-DPROJECT_PATH="${PROJECT_PATH}")

add_subdirectory(libraries)
add_subdirectory(src)

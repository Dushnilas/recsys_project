add_executable(main main.cpp)

target_link_libraries(main PRIVATE cosine_distance)
target_link_libraries(main PRIVATE word_to_vec)
target_link_libraries(main PRIVATE user_and_dev)
target_link_libraries(main PRIVATE movies)





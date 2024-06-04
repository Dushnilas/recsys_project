project(Classes)

set(CLASSES_SOURCES
        logger/logger.cpp
        movie/movies.cpp
        users/user_and_dev.cpp
)

set(CLASSES_HEADERS
        logger/logger.h
        movie/movies.h
        users/user_and_dev.h
)

add_library(classes STATIC ${CLASSES_SOURCES} ${CLASSES_HEADERS})

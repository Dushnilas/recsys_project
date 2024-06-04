project(Mase_Cinema_Project VERSION 0.1 LANGUAGES CXX)
cmake_minimum_required(VERSION 3.28)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        firstloginsignup.cpp
        firstloginsignup.h
        firstloginsignup.ui
        login.h login.cpp login.ui
        pagemain.h pagemain.cpp pagemain.ui
        userinfo.h userinfo.cpp userinfo.ui
        searchfilm.h searchfilm.cpp searchfilm.ui
        signup.h signup.cpp signup.ui
        persuser.h persuser.cpp persuser.ui
        tvshows.h tvshows.cpp tvshows.ui
        kidstv.h kidstv.cpp kidstv.ui
        mainwindow.h mainwindow.cpp mainwindow.ui
        filmpage.h filmpage.cpp filmpage.ui
        likedfilms.h likedfilms.cpp likedfilms.ui
        filmscollection.h filmscollection.cpp filmscollection.ui
        collectionpage.h collectionpage.cpp collectionpage.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Mase_Cinema_Project
            MANUAL_FINALIZATION
            ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(Mase_Cinema_Project SHARED
                ${PROJECT_SOURCES}
        )
    else()
        add_executable(Mase_Cinema_Project
                ${PROJECT_SOURCES}
        )
    endif()
endif()

# Include directories for dependencies
include_directories(${CMAKE_SOURCE_DIR}/src/backend/libraries/Classes/logger)
include_directories(${CMAKE_SOURCE_DIR}/src/backend/libraries/Classes/movie)
include_directories(${CMAKE_SOURCE_DIR}/src/backend/libraries/Classes/users)
include_directories(${CMAKE_SOURCE_DIR}/src/backend/libraries/mysql-queries)
include_directories(/opt/homebrew/Cellar/python@3.12/3.12.3/Frameworks/Python.framework/Versions/3.12/include/python3.12)

# Link directories for Python
link_directories(/opt/homebrew/Cellar/python@3.12/3.12.3/Frameworks/Python.framework/Versions/3.12/lib)

# Link libraries
target_link_libraries(Mase_Cinema_Project PRIVATE
        Qt${QT_VERSION_MAJOR}::Widgets
        /opt/homebrew/Cellar/python@3.12/3.12.3/Frameworks/Python.framework/Versions/3.12/lib/libpython3.12.dylib
        mysql-queries
        classes
)

# Set target properties for macOS and Windows
if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Mase_Cinema_Project)
endif()
set_target_properties(Mase_Cinema_Project PROPERTIES
        ${BUNDLE_ID_OPTION}
        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
        MACOSX_BUNDLE TRUE
        WIN32_EXECUTABLE TRUE
)

# Installation directives
include(GNUInstallDirs)
install(TARGETS Mase_Cinema_Project
        BUNDLE DESTINATION .
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Mase_Cinema_Project)
endif()

set(PROJECT_PATH /Users/senya/recsys_project_front/src/backend/libraries/mysql-queries)

add_definitions(-DPROJECT_PATH="${PROJECT_PATH}")

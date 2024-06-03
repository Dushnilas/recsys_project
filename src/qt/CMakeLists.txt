project(Mase_Cinema_Project VERSION 0.1 LANGUAGES CXX)

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


)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Mase_Cinema_Project
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        pics.qrc
        login.h login.cpp login.ui
        pagemain.h pagemain.cpp pagemain.ui
        userinfo.h userinfo.cpp userinfo.ui
        searchfilm.h searchfilm.cpp searchfilm.ui
        signup.h signup.cpp signup.ui
        persuser.h persuser.cpp persuser.ui
        tvshows.h tvshows.cpp tvshows.ui
        kidstv.h kidstv.cpp kidstv.ui



    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Mase_Cinema_Project APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Mase_Cinema_Project SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Mase_Cinema_Project
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Mase_Cinema_Project PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
include_directories(../backend/libraries/Classes/logger)
include_directories(../backend/libraries/Classes/movie)
include_directories(../backend/libraries/Classes/users)
include_directories(../backend/libraries/mysql-queries)


# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
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

include(GNUInstallDirs)
install(TARGETS Mase_Cinema_Project
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Mase_Cinema_Project)
endif()

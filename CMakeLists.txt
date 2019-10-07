cmake_minimum_required(VERSION 3.1.0)

project(quick_notes)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(quick_notes
    src/main.cpp
    src/mainwindow.ui
    src/mainwindow.cpp
    src/maineditor.cpp
    # resources.qrc
)

target_link_libraries(quick_notes PRIVATE Qt5::Widgets)
target_include_directories(quick_notes PRIVATE src)

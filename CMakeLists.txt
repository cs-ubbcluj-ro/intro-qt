cmake_minimum_required(VERSION 4.2)
project(intro_qt)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(intro_qt main.cpp)

target_link_libraries(intro_qt
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

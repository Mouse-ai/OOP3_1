cmake_minimum_required(VERSION 4.2)
project(OOP3_1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(OOP3_1 main.cpp)
target_link_libraries(OOP3_1
        Qt::Core
        Qt::Gui
        Qt::Widgets
)


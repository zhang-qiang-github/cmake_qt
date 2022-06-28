
cmake_minimum_required(VERSION 3.16)

project(helloworld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

add_executable(helloworld
    main.cpp
)

target_link_libraries(helloworld PRIVATE Qt6::Widgets Qt6::Core Qt6::Gui export_dll)

set_target_properties(helloworld PROPERTIES
    WIN32_EXECUTABLE OFF
    MACOSX_BUNDLE ON
)

add_subdirectory(export_dll)
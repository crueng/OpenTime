cmake_minimum_required(VERSION 3.25)

project(OpenTime LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Wichtig für Qt: MOC, UIC und Ressourcen automatisch verarbeiten
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS
        Core
        Gui
        Widgets
        Network
        Quick
        Qml
        QuickWidgets
)

set(SOURCE_FILES
        main.cpp
        Core/Presenter/TimeClockPresenter.cpp
        Core/Presenter/TimeClockPresenter.h
        Core/Model/TimeClockModel.cpp
        Core/Model/TimeClockModel.h
        Utils/Logger.cpp
        Utils/Logger.h
)

add_executable(OpenTime ${SOURCE_FILES})

target_link_libraries(OpenTime PRIVATE
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
        Qt6::Network
        Qt6::Quick
        Qt6::Qml
        Qt6::QuickWidgets
)
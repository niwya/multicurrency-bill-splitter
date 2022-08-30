cmake_minimum_required(VERSION 3.15)

project(Dependancies)

add_library(${PROJECT_NAME} STATIC
    Currency.cpp 
    Bill.cpp 
    User.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC 
        $<INSTALL_INTERFACE:dependancies>    
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/dependancies>
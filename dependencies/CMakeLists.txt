cmake_minimum_required(VERSION 3.15)

project(Dependencies)

add_library(${PROJECT_NAME} STATIC
    Currency.cpp 
    Bill.cpp 
    User.cpp
)
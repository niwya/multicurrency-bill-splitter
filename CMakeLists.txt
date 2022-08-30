cmake_minimum_required(VERSION 3.15)

project(BillSplitter)

add_executable(${PROJECT_NAME} 
    src/main.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/dependancies)
add_subdirectory(dependancies)
target_link_libraries(${PROJECT_NAME} PUBLIC dependancies)
target_link_directories(${PROJECT_NAME} PUBLIC dependancies)

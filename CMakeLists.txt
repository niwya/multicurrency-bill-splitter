cmake_minimum_required(VERSION 3.15)

project(BillSplitter)

add_subdirectory(dependencies)

add_executable(${PROJECT_NAME} 
    src/main.cpp)
    
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/dependencies)
target_link_libraries(${PROJECT_NAME} PRIVATE Dependencies)
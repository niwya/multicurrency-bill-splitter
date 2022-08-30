cmake_minimum_required(VERSION 3.15)

project(BillSplitter)

add_executable(${PROJECT_NAME} 
    src/main.cpp)

add_subdirectory(dependancies EXCLUDE_FROM_ALL)
target_link_libraries(${PROJECT_NAME} PRIVATE dependancies)
target_link_directories(${PROJECT_NAME} PRIVATE dependancies)

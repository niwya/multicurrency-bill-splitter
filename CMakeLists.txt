cmake_minimum_required(VERSION 3.15)

project(BillSplitter)

add_subdirectory(dependencies)

add_executable(${PROJECT_NAME} 
    src/main.cpp)
    
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/dependencies)
target_link_libraries(${PROJECT_NAME} PRIVATE Dependencies)

# Testing
include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests tests/testCurrency.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
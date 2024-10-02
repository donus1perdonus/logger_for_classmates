cmake_minimum_required(VERSION 3.10)

# Project name
project(LoggerProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(logger/include client_logger/include)

include_directories("C:\\msys64\\mingw64\\include")
link_directories("C:\\msys64\\mingw64\\lib")

# Add subdirectories
add_subdirectory(logger)
add_subdirectory(client_logger)

# Add the executable
add_executable(LoggerProject main.cpp)

# Link the libraries
target_link_libraries(LoggerProject logger client_logger)
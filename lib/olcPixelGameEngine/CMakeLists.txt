cmake_minimum_required(VERSION 3.0.0)
project(olcPixelGameEngine VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Create a library project
# Since this is a header only library, we make it an interface
add_library(${PROJECT_NAME} INTERFACE)# "${CMAKE_CURRENT_SOURCE_DIR}/include/olcPixelGameEngine.h")

target_include_directories(${PROJECT_NAME}
INTERFACE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

# Dependencies:
# - OpenGL 1.0
# - X11
# - libpng

# Install with:
#     sudo apt install build-essential libglu1-mesa-dev libpng-dev
target_link_libraries (${PROJECT_NAME} INTERFACE X11 GL pthread png stdc++fs)

cmake_minimum_required(VERSION 3.0.0)
project(asteroids VERSION 0.1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

# Add library subdirectories here
add_subdirectory(${CMAKE_SOURCE_DIR}/lib/olcPixelGameEngine)

add_executable(${PROJECT_NAME} src/asteroids.cpp)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        olcPixelGameEngine
)

target_link_libraries (${PROJECT_NAME} 
    PRIVATE
        olcPixelGameEngine
)


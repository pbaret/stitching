cmake_minimum_required(VERSION 2.8.11)

project(stitching)

ADD_DEFINITIONS ( -O3 -Wall -Wextra -Wno-unused -g -lboost_system)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

#fin opencv package
find_package( OpenCV REQUIRED )

# SOURCE CODE :
set ( SOURCES
main.cpp
)

set ( HEADERS
)

# Tell CMake to create the helloworld executable
add_executable(stitching ${SOURCES} ${HEADERS})

add_executable(video video.cpp)

target_link_libraries(stitching ${OpenCV_LIBS})    # Use OpenCV

target_link_libraries(video ${OpenCV_LIBS})

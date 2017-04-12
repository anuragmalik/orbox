cmake_minimum_required(VERSION 3.7)
project(orbox)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/block.h src/block.cpp src/orbox.h src/orbox.cpp src/board.cpp src/board.h src/player.cpp src/player.h src/bomb.cpp src/bomb.h src/switch.cpp src/switch.h src/brick.cpp src/brick.h src/direction.h src/solver.cpp src/solver.h src/target.cpp src/target.h src/star.cpp src/star.h src/Coordinate.cpp src/Coordinate.h src/Color.h)
add_executable(orbox ${SOURCE_FILES})
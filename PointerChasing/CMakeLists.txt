# CMakeList.txt : CMake project for PointerChasing, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.7)

file(GLOB PointerChasingSource
    "*.h"
    "*.cpp"
)

# Add source to this project's executable.
add_executable (PointerChasing ${PointerChasingSource})


# TODO: Add tests and install targets if needed.

cmake_minimum_required(VERSION 3.13)
project(Mascode CXX)

option (FORCE_COLORED_OUTPUT "Always produce ANSI-colored output (Clang only)." TRUE)
if (${FORCE_COLORED_OUTPUT})
    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
       add_compile_options (-Wall -Wextra -Wno-newline-eof -pedantic -fcolor-diagnostics -fansi-escape-codes)
    endif ()
endif ()

file(GLOB_RECURSE SOURCES "src/*.hpp" "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
cmake_minimum_required(VERSION 3.15...4.4)
project(Order_Book VERSION 1.0
        DESCRIPTION "Order Book"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)

include(FetchContent)

add_library(orderbook src/placeholder.cpp)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.18.0
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(googletest)

FetchContent_Declare(
    benchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.10.0
    GIT_SHALLOW TRUE
)
set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
set (BENCHMARK_ENABLE_INSTALL OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(benchmark)

enable_testing()
add_subdirectory(tests)
add_subdirectory(bench)

target_include_directories(orderbook PUBLIC src)
target_compile_options(orderbook PRIVATE -Wall -Wextra -Wpedantic)

add_executable(replay apps/main.cpp)
target_link_libraries(replay PRIVATE orderbook)
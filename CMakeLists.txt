cmake_minimum_required(VERSION 3.15...4.4)
project(Order_Book VERSION 1.0
        DESCRIPTION "Order Book"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(orderbook src/placeholder.cpp src/placeholder.hpp)
target_include_directories(orderbook PUBLIC src)

add_executable(replay apps/main.cpp)
target_link_libraries(replay PRIVATE orderbook)
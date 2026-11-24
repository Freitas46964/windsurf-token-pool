cmake_minimum_required(VERSION 3.16)
project(windsurf-token-pool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(windsurftokenpool
    src/main.cpp
    src/pool.cpp
    src/accounts.cpp
    src/rotate.cpp
)

target_include_directories(windsurftokenpool PRIVATE include)

if(WIN32)
    target_link_libraries(windsurftokenpool PRIVATE userenv)
endif()

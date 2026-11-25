cmake_minimum_required(VERSION 3.16)
project(old-photo-life CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(oldphotolife
    src/main.cpp
    src/animate.cpp
    src/restore.cpp
    src/colorize.cpp
    src/cli.cpp
)

target_include_directories(oldphotolife PRIVATE include)

if(WIN32)
    target_link_libraries(oldphotolife PRIVATE userenv)
endif()

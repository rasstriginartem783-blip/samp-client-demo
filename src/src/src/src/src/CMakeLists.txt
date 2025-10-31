cmake_minimum_required(VERSION 3.15)
project(samp_client_demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(samp_client_demo
    src/main.cpp
    src/network.cpp
)

if(WIN32)
    target_link_libraries(samp_client_demo ws2_32)
endif()

cmake_minimum_required(VERSION 3.0.0)
project(Bank VERSION 1.0.0)
add_subdirectory(lib/bankingModule)
add_executable(Bank
src/main.cpp)
target_link_libraries(Bank bankingModule)

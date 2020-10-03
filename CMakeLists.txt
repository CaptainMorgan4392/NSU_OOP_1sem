cmake_minimum_required(VERSION 3.13)
project(lab1_again)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab1 LinkedListLib/LinkedList.cpp LinkedListLib/Iterator.cpp LinkedListLib/Const_Iterator.cpp main.cpp LinkedListLib/Node.cpp test/testList.cpp test/TestIterator.cpp)

add_subdirectory(lib/googletest-master)

include_directories(lib/googletest-master/googletest/include)

include_directories(lib/googletest-master/googlemock/include)

target_link_libraries(lab1 gtest gtest_main)
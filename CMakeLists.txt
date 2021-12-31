cmake_minimum_required(VERSION 3.21)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/DoubleLinkedList)
include_directories(src/SimpleLinkedList)

add_executable(DataStructures
        src/DoubleLinkedList/DoubleLinkedList.cpp
        src/DoubleLinkedList/DoubleLinkedList.h
        src/SimpleLinkedList/TestLinkedList.cpp src/SimpleLinkedList/LinkedList.h src/SimpleLinkedList/Node.h)

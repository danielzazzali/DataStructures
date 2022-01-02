cmake_minimum_required(VERSION 3.21)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/DoubleLinkedList)
include_directories(src/SimpleLinkedList)

add_executable(DataStructures
        src/SimpleLinkedList/TestLinkedList.cpp
        src/SimpleLinkedList/LinkedList.h
        src/SimpleLinkedList/Node.h
        src/SimpleLinkedList/Node.cpp
        src/SimpleLinkedList/LinkedList.cpp src/DoubleLinkedList/DLNode.cpp src/DoubleLinkedList/DLNode.h src/DoubleLinkedList/DoubleLinkedList.cpp src/DoubleLinkedList/DoubleLinkedList.h)

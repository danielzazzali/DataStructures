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
        src/SimpleLinkedList/LinkedList.cpp
        src/DoublyLinkedList/DLNode.cpp
        src/DoublyLinkedList/DLNode.h
        src/DoublyLinkedList/DoublyLinkedList.cpp
        src/DoublyLinkedList/DoublyLinkedList.h
        src/DoublyLinkedList/TestDoublyLinkedList.cpp
        )

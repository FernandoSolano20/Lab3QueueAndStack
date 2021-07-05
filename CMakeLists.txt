cmake_minimum_required(VERSION 3.19)
project(StackAndQueue)

set(CMAKE_CXX_STANDARD 14)

add_executable(StackAndQueue main.cpp structures/List.cpp structures/List.h structures/Node/Node.cpp structures/Node/Node.h structures/Queue/Queue.cpp structures/Queue/Queue.h structures/Stack/Stack.cpp structures/Stack/Stack.h Controller/Controller.cpp Controller/Controller.h)
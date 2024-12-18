cmake_minimum_required(VERSION 3.30)
project(sem_mod_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(sem_mod_2 main.cpp
        Client.cpp
        Client.h
        Queue.cpp
        Queue.h
        Deque.cpp
        Deque.h
        Stack.cpp
        Stack.h
        Operator.cpp
        Operator.h
        BankSystem.cpp
        BankSystem.h)

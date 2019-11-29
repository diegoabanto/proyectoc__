cmake_minimum_required(VERSION 3.14)
project(proyectoc__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(proyectoc__
        Almacen.cpp
        Almacen.h
        Controlador.cpp
        Controlador.h
        funciones.h
        Instruccion.cpp
        Instruccion.h
        main.cpp
        Robot.cpp
        Robot.h
        Slot.cpp
        Slot.h)

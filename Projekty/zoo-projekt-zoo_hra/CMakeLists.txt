cmake_minimum_required(VERSION 3.21)
project(zoo_hra)

set(CMAKE_CXX_STANDARD 14)

add_executable(zoo_hra main.cpp Engine/Engine.cpp Engine/Engine.h Budovy/Budova.cpp Budovy/Budova.h Budovy/Pila.cpp Budovy/Pila.h Budovy/Dul.cpp Budovy/Dul.h Budovy/Farma.cpp Budovy/Farma.h Budovy/HlavniBudova.cpp Budovy/HlavniBudova.h Budovy/Sklad.cpp Budovy/Sklad.h Budovy/Zbrojnice.cpp Budovy/Zbrojnice.h Enemy/Enemy.cpp Enemy/Enemy.h Mapa/Mapa.cpp Mapa/Mapa.h Budovy/Voda.cpp Budovy/Voda.h Budovy/PrazdnyPozemek.cpp Budovy/PrazdnyPozemek.h)
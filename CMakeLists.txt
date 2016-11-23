cmake_minimum_required(VERSION 3.6)
project(HearthstoneResolver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Core/ACard.cpp Core/ACard.h Core/ASpell.cpp Core/ASpell.h Core/AMinion.cpp Core/AMinion.h Core/Target.h Core/Class.h Core/Playable.cpp Core/Playable.h)
add_executable(HearthstoneResolver ${SOURCE_FILES})

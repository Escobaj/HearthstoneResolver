cmake_minimum_required(VERSION 3.6)
project(HearthstoneResolver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Emulator/Core/Type/Target.h Emulator/Core/Type/Class.h Emulator/Core/Entities/ACard.cpp Emulator/Core/Entities/ACard.h Emulator/Core/Type/CardType.h Emulator/Core/Entities/ATargetable.cpp Emulator/Core/Entities/ATargetable.h Emulator/Core/Game/GameManager.cpp Emulator/Core/Game/GameManager.h Emulator/Core/Game/Api.cpp Emulator/Core/Game/Api.h Emulator/Core/Event/EventHandler.cpp Emulator/Core/Event/EventHandler.h Emulator/Core/Entities/ADamager.cpp Emulator/Core/Entities/ADamager.h Emulator/Core/Entities/Spell.cpp Emulator/Core/Entities/Spell.h Emulator/Core/Entities/HeroPower.cpp Emulator/Core/Entities/HeroPower.h Emulator/Core/Type/State.h Emulator/Core/Entities/Weapon.cpp Emulator/Core/Entities/Weapon.h Emulator/Core/Entities/Minion.cpp Emulator/Core/Entities/Minion.h Emulator/Core/Entities/Player.cpp Emulator/Core/Entities/Player.h Emulator/test/Weapon1.cpp Emulator/test/Weapon1.h Emulator/Core/Event/AEntity.cpp Emulator/Core/Event/AEntity.h Emulator/Core/Type/EntityType.h Emulator/test/Minion1.cpp Emulator/test/Minion1.h Emulator/Core/Utility/log.cpp Emulator/Core/Utility/log.h)
add_executable(HearthstoneResolver ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
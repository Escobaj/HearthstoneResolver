//
// Created by escoba_j on 29/11/2016.
//

#include "GameManager.h"

GameManager::GameManager() {
    _end = false;
}

Player * GameManager::get_player() {
    return _player;
}

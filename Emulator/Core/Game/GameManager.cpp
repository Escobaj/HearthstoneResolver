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

void GameManager::shuffleDecks() {
    this->_player[0].shuffleDeck();
    this->_player[1].shuffleDeck();
}

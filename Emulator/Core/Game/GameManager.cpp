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

void GameManager::start() {
    this->shuffleDecks();
    this->_player[0].draw(3);
    this->_player[1].draw(4);
}

int GameManager::get_playerTurn() const {
    $
}

void GameManager::set_playerTurn(int _playerTurn) {
    GameManager::_playerTurn = _playerTurn;
}

int GameManager::get_turn() const {
    return _turn;
}

void GameManager::set_turn(int _turn) {
    GameManager::_turn = _turn;
}

int GameManager::get_order() const {
    return _order;
}

void GameManager::set_order(int _order) {
    GameManager::_order = _order;
}

//
// Created by escoba_j on 30/11/2016.
//

#include "Player.h"

State Player::play(unsigned int order) {
    return State::FORBIDDEN;
}

const std::vector<ACard *> &Player::get_hands() const {
    return _hands;
}

void Player::set_hands(const std::vector<ACard *> &_hands) {
    Player::_hands = _hands;
}

const std::vector<Minion *> &Player::get_board() const {
    return _board;
}

void Player::set_board(const std::vector<Minion *> &_board) {
    Player::_board = _board;
}

const std::vector<ACard *> &Player::get_deck() const {
    return _deck;
}

void Player::set_deck(const std::vector<ACard *> &_deck) {
    Player::_deck = _deck;
}

const std::vector<ACard *> &Player::get_played() const {
    return _played;
}

void Player::set_played(const std::vector<ACard *> &_played) {
    Player::_played = _played;
}

const std::map<std::string, int> &Player::getAttribute() const {
    return attribute;
}

void Player::setAttribute(const std::map<std::string, int> &attribute) {
    Player::attribute = attribute;
}

const std::vector<ACard *> &Player::get_secret() const {
    return _secret;
}

void Player::set_secret(const std::vector<ACard *> &_secret) {
    Player::_secret = _secret;
}

Weapon *Player::get_weapon() const {
    return _weapon;
}

void Player::set_weapon(Weapon *_weapon) {
    Player::_weapon = _weapon;
}

unsigned int Player::get_maxMana() const {
    return _maxMana;
}

void Player::set_maxMana(unsigned int _maxMana) {
    Player::_maxMana = _maxMana;
}

unsigned int Player::get_currentMana() const {
    return _currentMana;
}

void Player::set_currentMana(unsigned int _currentMana) {
    Player::_currentMana = _currentMana;
}

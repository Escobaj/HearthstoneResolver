//
// Created by escoba_j on 29/11/2016.
//

#include <cstdlib>
#include "Api.h"
#include "../../test/Weapon1.h"
#include "../../test/Minion1.h"

bool Api::isEnd() {
    return false;
}

void Api::startGame() {
    this->initFromFile("tst");
    this->_game.shuffleDecks();
    this->_game.start();
}

const GameManager &Api::get_game() const {
    return _game;
}

const std::vector<AEntity *> & Api::getBoardPlayer(int player, bool verbose)
{
    if (verbose){
        const std::vector<AEntity *> &board = this->_game.get_player()[player].get_board();
        std::cout << "Board player " << player << ": " << std::endl;
        for (int i = 0; i < board.size(); i += 1) {
            std::cout << i << ": " << board[i]->get_reference()->get_name() << std::endl;
        }
        return board;
    } else {
        return this->_game.get_player()[player].get_board();
    }
}

const std::vector<AEntity *> &Api::getCurrentHand(bool verbose) {
    if (verbose){
        const std::vector<AEntity *> &hand = this->_game.get_player()[this->_game.get_playerTurn()].get_hands();
        std::cout << "Hand current player :" << std::endl;
        for (int i = 0; i < hand.size(); i += 1) {
            std::cout << i << ": " << hand[i]->get_reference()->get_name() << std::endl;
        }
        return hand;
    } else {
        return this->_game.get_player()[this->_game.get_playerTurn()].get_hands();
    }
}

bool Api::interpret(std::string str) {

    if (str == "REMAINING CARD") {
        this->getRemainCard(0, true);
        this->getRemainCard(1, true);
    } else if (str == "BOARD") {
        this->getBoardPlayer(0, true);
        this->getBoardPlayer(1, true);
    } else if (str == "HAND") {
        this->getCurrentHand(true);
    } else if (str == "END") {
        this->endTurn();
    } else {
        return false;
    }
    return true;
}

void Api::initFromFile(std::string string) {
    // TODO: generate players deck from file
    // tmp generation deck from exemple class weapon1 and minion1
    for (int i = 0; i < 30; ++i) {
        if (rand() % 2) {
            this->addCardToPlayer(0, new AEntity(new Weapon1(_event)));
        } else {
            this->addCardToPlayer(0, new AEntity(new Minion1(_event)));
        }
    }
    for (int i = 0; i < 30; ++i) {
        if (rand() % 2) {
            this->addCardToPlayer(1, new AEntity(new Weapon1(_event)));
        } else {
            this->addCardToPlayer(1, new AEntity(new Minion1(_event)));
        }
    }
}

void Api::addCardToPlayer(int playerId, AEntity *entity) {
    Player *tmp = _game.get_player();
    tmp[playerId].addCard(entity);
}

int Api::getRemainCard(int player, bool verbose) {
    if (verbose){
        int tmp = _game.get_player()[player].get_deck().size();
        std::cout << "Le joueur " << player + 1 << " possede " << tmp << " cartes dans son deck" << std::endl;
    }
    return _game.get_player()[player].get_deck().size();
}

void Api::endTurn() {
    if (_game.get_playerTurn() == 1){
        _game.set_turn(_game.get_turn() + 1);
    }
    _game.set_playerTurn(!_game.get_playerTurn());
    _game.get_player()[_game.get_playerTurn()].draw(1);
}
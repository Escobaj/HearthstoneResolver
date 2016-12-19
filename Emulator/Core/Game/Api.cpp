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
}

const GameManager &Api::get_game() const {
    return _game;
}

bool Api::interpret(std::string string) {
    if (string == "REMAINING CARD"){
        this->getRemainCard(0, true);
        this->getRemainCard(1, true);
        return true;
    }
    return false;
}

void Api::initFromFile(std::string string) {
    //TODO: generate players deck from file
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

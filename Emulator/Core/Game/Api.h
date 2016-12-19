//
// Created by escoba_j on 29/11/2016.
//

#ifndef HEARTHSTONERESOLVER_API_H
#define HEARTHSTONERESOLVER_API_H

#include "GameManager.h"
#include "../Event/EventHandler.h"
#include "../Event/AEntity.h"
#include <string>
#include <iostream>

class Api {

public:
    bool isEnd();
    void startGame();
    const GameManager &get_game() const;
    bool interpret(std::string str);
    void initFromFile(std::string str);
    void addCardToPlayer(int playerId, AEntity *entity);

private:
    GameManager _game;
    EventHandler _event;

    /**
     *
     * @param player
     * @param verbose
     * @return
     */
    int getRemainCard(int player, bool verbose = false);

};


#endif //HEARTHSTONERESOLVER_API_H

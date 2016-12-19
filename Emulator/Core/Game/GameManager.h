//
// Created by escoba_j on 29/11/2016.
//

#ifndef HEARTHSTONERESOLVER_GAME_H
#define HEARTHSTONERESOLVER_GAME_H

#include "GameManager.h"
#include "../Entities/Player.h"

class GameManager {
public:
    GameManager();
    Player * get_player();

    void shuffleDecks();

private:
    bool _end;
    Player _player[2];
    int _turn;
    int _order;
};

#endif //HEARTHSTONERESOLVER_GAME_H

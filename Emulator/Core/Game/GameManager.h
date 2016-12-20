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

    void start();

private:
    bool _end;
    Player _player[2];
    int _playerTurn;
public:
    int get_playerTurn() const;

    void set_playerTurn(int _playerTurn);

    int get_turn() const;

    void set_turn(int _turn);

    int get_order() const;

    void set_order(int _order);

private:
    int _turn;
    int _order;
};

#endif //HEARTHSTONERESOLVER_GAME_H

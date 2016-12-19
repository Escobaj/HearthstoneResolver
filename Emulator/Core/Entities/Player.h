//
// Created by escoba_j on 30/11/2016.
//

#ifndef HEARTHSTONERESOLVER_PLAYER_H
#define HEARTHSTONERESOLVER_PLAYER_H

#include <vector>
#include <map>
#include "Minion.h"
#include "Weapon.h"
#include "../Event/AEntity.h"

class Player {
private:
    std::vector<AEntity *> _hands;
    std::vector<AEntity *> _board;
    std::vector<AEntity *> _deck;
    std::vector<AEntity *> _played;
    std::map<std::string, int> attribute;
    std::vector<AEntity *> _secret;
    Weapon *_weapon;
    unsigned int _maxMana;
    unsigned int _currentMana;
public:
    const std::vector<AEntity *> &get_hands() const;

    void set_hands(const std::vector<AEntity *> &_hands);

    const std::vector<AEntity *> &get_board() const;

    void set_board(const std::vector<AEntity *> &_board);

    const std::vector<AEntity *> &get_deck() const;

    void set_deck(const std::vector<AEntity *> &_deck);

    const std::vector<AEntity *> &get_played() const;

    void set_played(const std::vector<AEntity *> &_played);

    const std::map<std::string, int> &getAttribute() const;

    void setAttribute(const std::map<std::string, int> &attribute);

    const std::vector<AEntity *> &get_secret() const;

    void set_secret(const std::vector<AEntity *> &_secret);

    Weapon *get_weapon() const;

    void set_weapon(Weapon *_weapon);

    unsigned int get_maxMana() const;

    void set_maxMana(unsigned int _maxMana);

    unsigned int get_currentMana() const;

    void set_currentMana(unsigned int _currentMana);

    State play(unsigned int order);

    void addCard(AEntity *pEntity);
};

#endif //HEARTHSTONERESOLVER_PLAYER_H

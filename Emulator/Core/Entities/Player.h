//
// Created by escoba_j on 30/11/2016.
//

#ifndef HEARTHSTONERESOLVER_PLAYER_H
#define HEARTHSTONERESOLVER_PLAYER_H

#include <vector>
#include <map>
#include "Minion.h"
#include "Weapon.h"

class Player {
private:
    std::vector<ACard *> _hands;
    std::vector<Minion *> _board;
    std::vector<ACard *> _deck;
    std::vector<ACard *> _played;
    std::map<std::string, int> attribute;
    std::vector<ACard *> _secret;
    Weapon *_weapon;
    unsigned int _maxMana;
    unsigned int _currentMana;
public:
    const std::vector<ACard *> &get_hands() const;

    void set_hands(const std::vector<ACard *> &_hands);

    const std::vector<Minion *> &get_board() const;

    void set_board(const std::vector<Minion *> &_board);

    const std::vector<ACard *> &get_deck() const;

    void set_deck(const std::vector<ACard *> &_deck);

    const std::vector<ACard *> &get_played() const;

    void set_played(const std::vector<ACard *> &_played);

    const std::map<std::string, int> &getAttribute() const;

    void setAttribute(const std::map<std::string, int> &attribute);

    const std::vector<ACard *> &get_secret() const;

    void set_secret(const std::vector<ACard *> &_secret);

    Weapon *get_weapon() const;

    void set_weapon(Weapon *_weapon);

    unsigned int get_maxMana() const;

    void set_maxMana(unsigned int _maxMana);

    unsigned int get_currentMana() const;

    void set_currentMana(unsigned int _currentMana);

public:
    State play(unsigned int order);
};

#endif //HEARTHSTONERESOLVER_PLAYER_H

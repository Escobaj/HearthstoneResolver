//
// Created by escoba_j on 29/11/2016.
//

#ifndef HEARTHSTONERESOLVER_ADAMAGER_H
#define HEARTHSTONERESOLVER_ADAMAGER_H


#include "ACard.h"

class ADamager : public ACard{
private:
    unsigned int _defaultDamage;
    unsigned int _currentDamage;
    unsigned int _attackMax;
    unsigned int attackRemain;
    bool         _canAttack;
public:
    ADamager(const EventHandler &e);

    State play(unsigned int order);

    unsigned int get_defaultDamage() const;

    void set_defaultDamage(unsigned int _defaultDamage);

    unsigned int get_currentDamage() const;

    void set_currentDamage(unsigned int _currentDamage);

    unsigned int get_attackMax() const;

    void set_attackMax(unsigned int _attackMax);

    unsigned int getAttackRemain() const;

    void setAttackRemain(unsigned int attackRemain);

    bool is_canAttack() const;

    void set_canAttack(bool _canAttack);
};


#endif //HEARTHSTONERESOLVER_ADAMAGER_H

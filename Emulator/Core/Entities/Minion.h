//
// Created by escoba_j on 30/11/2016.
//

#ifndef HEARTHSTONERESOLVER_MINION_H
#define HEARTHSTONERESOLVER_MINION_H


#include "ATargetable.h"
#include "ADamager.h"
#include "../Type/CardType.h"

class Minion : public ATargetable, public ADamager {
private:
    bool _targetable;
    bool _imun;
    bool _stealth;
    bool _taunt;
    bool _divineShield;
    CardType _type;
public:
    Minion(const EventHandler &e);

    bool is_targetable() const;

    void set_targetable(bool _targetable);

    bool is_imun() const;

    void set_imun(bool _imun);

    bool is_stealth() const;

    void set_stealth(bool _stealth);

    bool is_taunt() const;

    void set_taunt(bool _taunt);

    bool is_divineShield() const;

    void set_divineShield(bool _divineShield);

    CardType get_type() const;

    void set_type(CardType _type);

public:
    State play(unsigned int order);
};


#endif //HEARTHSTONERESOLVER_MINION_H

//
// Created by Jo on 19/12/2016.
//

#include "M2624.h"

M2624::M2624(const EventHandler &e) : Minion(e) {
    this->set_id(2624);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Garde funeste effroyable");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(6);
    this->set_maxHealth(8);
}

void M2624::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M631.h"

M631::M631(const EventHandler &e) : Minion(e) {
    this->set_id(631);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Garde funeste");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(5);
    this->set_maxHealth(7);
}

void M631::init() {
}
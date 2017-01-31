//
// Created by Jo on 19/12/2016.
//

#include "M40537.h"

M40537::M40537(const EventHandler &e) : Minion(e) {
    this->set_id(40537);
    this->set_attackMax(7);
    this->set_defaultCost(9);
    this->set_name("Krul le Déchaîné");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(7);
    this->set_maxHealth(9);
}

void M40537::init() {
}
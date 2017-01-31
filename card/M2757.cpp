//
// Created by Jo on 19/12/2016.
//

#include "M2757.h"

M2757::M2757(const EventHandler &e) : Minion(e) {
    this->set_id(2757);
    this->set_attackMax(4);
    this->set_defaultCost(7);
    this->set_name("Cap’taine céleste Kragg");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M2757::init() {
}
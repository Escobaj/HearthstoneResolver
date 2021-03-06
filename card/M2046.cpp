//
// Created by Jo on 19/12/2016.
//

#include "M2046.h"

M2046::M2046(const EventHandler &e) : Minion(e) {
    this->set_id(2046);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Yéti mécanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M2046::init() {
}
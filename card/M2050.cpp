//
// Created by Jo on 19/12/2016.
//

#include "M2050.h"

M2050::M2050(const EventHandler &e) : Minion(e) {
    this->set_id(2050);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Gnome mécanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2050::init() {
}
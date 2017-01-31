//
// Created by Jo on 19/12/2016.
//

#include "M39210.h"

M39210::M39210(const EventHandler &e) : Minion(e) {
    this->set_id(39210);
    this->set_attackMax(3);
    this->set_defaultCost(6);
    this->set_name("Wyrm de bibliothèque");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M39210::init() {
}
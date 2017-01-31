//
// Created by Jo on 19/12/2016.
//

#include "M2841.h"

M2841::M2841(const EventHandler &e) : Minion(e) {
    this->set_id(2841);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Pirate");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2841::init() {
}
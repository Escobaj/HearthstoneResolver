//
// Created by Jo on 19/12/2016.
//

#include "M2346.h"

M2346::M2346(const EventHandler &e) : Minion(e) {
    this->set_id(2346);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Dragonnet");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2346::init() {
}
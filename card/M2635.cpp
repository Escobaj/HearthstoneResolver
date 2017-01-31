//
// Created by Jo on 19/12/2016.
//

#include "M2635.h"

M2635::M2635(const EventHandler &e) : Minion(e) {
    this->set_id(2635);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Elekk du roi");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2635::init() {
}
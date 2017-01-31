//
// Created by Jo on 19/12/2016.
//

#include "M336.h"

M336::M336(const EventHandler &e) : Minion(e) {
    this->set_id(336);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Baron Geddon");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(5);
}

void M336::init() {
}
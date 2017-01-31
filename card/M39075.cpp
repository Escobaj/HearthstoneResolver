//
// Created by Jo on 19/12/2016.
//

#include "M39075.h"

M39075::M39075(const EventHandler &e) : Minion(e) {
    this->set_id(39075);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Saphiron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M39075::init() {
}
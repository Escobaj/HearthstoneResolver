//
// Created by Jo on 19/12/2016.
//

#include "M2490.h"

M2490::M2490(const EventHandler &e) : Minion(e) {
    this->set_id(2490);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Cavalier d’Argent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2490::init() {
}
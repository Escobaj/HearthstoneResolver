//
// Created by Jo on 19/12/2016.
//

#include "M1775.h"

M1775::M1775(const EventHandler &e) : Minion(e) {
    this->set_id(1775);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Andy Brock");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M1775::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M19360.h"

M19360::M19360(const EventHandler &e) : Minion(e) {
    this->set_id(19360);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Soigneur débutant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M19360::init() {
}
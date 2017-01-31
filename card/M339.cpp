//
// Created by Jo on 19/12/2016.
//

#include "M339.h"

M339::M339(const EventHandler &e) : Minion(e) {
    this->set_id(339);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Fusilier de Forgefer");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M339::init() {
}
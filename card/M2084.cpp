//
// Created by Jo on 19/12/2016.
//

#include "M2084.h"

M2084::M2084(const EventHandler &e) : Minion(e) {
    this->set_id(2084);
    this->set_attackMax(9);
    this->set_defaultCost(9);
    this->set_name("Mekgénieur Thermojoncteur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(9);
    this->set_maxHealth(7);
}

void M2084::init() {
}
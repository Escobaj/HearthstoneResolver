//
// Created by Jo on 19/12/2016.
//

#include "M39280.h"

M39280::M39280(const EventHandler &e) : Minion(e) {
    this->set_id(39280);
    this->set_attackMax(0);
    this->set_defaultCost(4);
    this->set_name("Dorothée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(10);
}

void M39280::init() {
}
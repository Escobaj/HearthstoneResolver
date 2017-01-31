//
// Created by Jo on 19/12/2016.
//

#include "M37661.h"

M37661::M37661(const EventHandler &e) : Minion(e) {
    this->set_id(37661);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Avorton vaurien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M37661::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2961.h"

M2961::M2961(const EventHandler &e) : Minion(e) {
    this->set_id(2961);
    this->set_attackMax(2);
    this->set_defaultCost(6);
    this->set_name("Avortons tremblants");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M2961::init() {
}
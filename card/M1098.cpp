//
// Created by Jo on 19/12/2016.
//

#include "M1098.h"

M1098::M1098(const EventHandler &e) : Minion(e) {
    this->set_id(1098);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Cobra empereur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M1098::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M1603.h"

M1603::M1603(const EventHandler &e) : Minion(e) {
    this->set_id(1603);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Chasseur fou");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1603::init() {
}
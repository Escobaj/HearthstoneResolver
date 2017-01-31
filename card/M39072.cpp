//
// Created by Jo on 19/12/2016.
//

#include "M39072.h"

M39072::M39072(const EventHandler &e) : Minion(e) {
    this->set_id(39072);
    this->set_attackMax(3);
    this->set_defaultCost(8);
    this->set_name("Instructeur Razuvious");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M39072::init() {
}
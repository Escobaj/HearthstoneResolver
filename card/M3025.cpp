//
// Created by Jo on 19/12/2016.
//

#include "M3025.h"

M3025::M3025(const EventHandler &e) : Minion(e) {
    this->set_id(3025);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Elizabeth Cho");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M3025::init() {
}
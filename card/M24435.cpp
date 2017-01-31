//
// Created by Jo on 19/12/2016.
//

#include "M24435.h"

M24435::M24435(const EventHandler &e) : Minion(e) {
    this->set_id(24435);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Garde ondulant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M24435::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M754.h"

M754::M754(const EventHandler &e) : Minion(e) {
    this->set_id(754);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Brise-sort");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M754::init() {
}
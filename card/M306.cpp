//
// Created by Jo on 19/12/2016.
//

#include "M306.h"

M306::M306(const EventHandler &e) : Minion(e) {
    this->set_id(306);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Edwin VanCleef");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M306::init() {
}
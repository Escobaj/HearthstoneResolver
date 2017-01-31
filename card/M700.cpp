//
// Created by Jo on 19/12/2016.
//

#include "M700.h"

M700::M700(const EventHandler &e) : Minion(e) {
    this->set_id(700);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Gardien mogu’shan");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(7);
}

void M700::init() {
}
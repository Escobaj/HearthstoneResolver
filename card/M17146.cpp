//
// Created by Jo on 19/12/2016.
//

#include "M17146.h"

M17146::M17146(const EventHandler &e) : Minion(e) {
    this->set_id(17146);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Statue de terrestre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M17146::init() {
}
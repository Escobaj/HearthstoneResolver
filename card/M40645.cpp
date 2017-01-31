//
// Created by Jo on 19/12/2016.
//

#include "M40645.h"

M40645::M40645(const EventHandler &e) : Minion(e) {
    this->set_id(40645);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Susie Grésichant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M40645::init() {
}
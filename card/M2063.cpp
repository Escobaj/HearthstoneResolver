//
// Created by Jo on 19/12/2016.
//

#include "M2063.h"

M2063::M2063(const EventHandler &e) : Minion(e) {
    this->set_id(2063);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Sapeur gobelin");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2063::init() {
}
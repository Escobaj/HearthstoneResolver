//
// Created by Jo on 19/12/2016.
//

#include "M886.h"

M886::M886(const EventHandler &e) : Minion(e) {
    this->set_id(886);
    this->set_attackMax(0);
    this->set_defaultCost(4);
    this->set_name("Rejeton de lumière");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(5);
}

void M886::init() {
}
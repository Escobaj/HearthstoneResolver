//
// Created by Jo on 19/12/2016.
//

#include "M2034.h"

M2034::M2034(const EventHandler &e) : Minion(e) {
    this->set_id(2034);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Chaman cognedune");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2034::init() {
}
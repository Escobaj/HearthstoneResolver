//
// Created by Jo on 19/12/2016.
//

#include "M36452.h"

M36452::M36452(const EventHandler &e) : Minion(e) {
    this->set_id(36452);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Momie zombie");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M36452::init() {
}
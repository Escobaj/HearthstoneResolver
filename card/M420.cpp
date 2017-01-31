//
// Created by Jo on 19/12/2016.
//

#include "M420.h"

M420::M420(const EventHandler &e) : Minion(e) {
    this->set_id(420);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Cairne Sabot-de-Sang");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M420::init() {
}
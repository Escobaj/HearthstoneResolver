//
// Created by Jo on 19/12/2016.
//

#include "M1638.h"

M1638::M1638(const EventHandler &e) : Minion(e) {
    this->set_id(1638);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Myrmidon naga");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1638::init() {
}
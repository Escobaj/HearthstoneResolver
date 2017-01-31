//
// Created by Jo on 19/12/2016.
//

#include "M132.h"

M132::M132(const EventHandler &e) : Minion(e) {
    this->set_id(132);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Docteur vaudou");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M132::init() {
}
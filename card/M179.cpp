//
// Created by Jo on 19/12/2016.
//

#include "M179.h"

M179::M179(const EventHandler &e) : Minion(e) {
    this->set_id(179);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("Feu follet");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M179::init() {
}
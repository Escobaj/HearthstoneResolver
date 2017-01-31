//
// Created by Jo on 19/12/2016.
//

#include "M2511.h"

M2511::M2511(const EventHandler &e) : Minion(e) {
    this->set_id(2511);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Écumeur kvaldir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2511::init() {
}
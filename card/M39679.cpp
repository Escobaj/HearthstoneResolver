//
// Created by Jo on 19/12/2016.
//

#include "M39679.h"

M39679::M39679(const EventHandler &e) : Minion(e) {
    this->set_id(39679);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Gelée polluée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M39679::init() {
}
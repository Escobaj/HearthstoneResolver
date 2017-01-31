//
// Created by Jo on 19/12/2016.
//

#include "M1767.h"

M1767::M1767(const EventHandler &e) : Minion(e) {
    this->set_id(1767);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Zwick");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1767::init() {
}
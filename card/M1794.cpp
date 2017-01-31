//
// Created by Jo on 19/12/2016.
//

#include "M1794.h"

M1794::M1794(const EventHandler &e) : Minion(e) {
    this->set_id(1794);
    this->set_attackMax(6);
    this->set_defaultCost(8);
    this->set_name("Kel’Thuzad");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(8);
}

void M1794::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M496.h"

M496::M496(const EventHandler &e) : Minion(e) {
    this->set_id(496);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Chef de guerre loup-de-givre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M496::init() {
}
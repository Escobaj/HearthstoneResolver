//
// Created by Jo on 19/12/2016.
//

#include "M39076.h"

M39076::M39076(const EventHandler &e) : Minion(e) {
    this->set_id(39076);
    this->set_attackMax(2);
    this->set_defaultCost(9);
    this->set_name("Noth le Porte-Peste");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M39076::init() {
}
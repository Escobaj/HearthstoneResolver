//
// Created by Jo on 19/12/2016.
//

#include "M2711.h"

M2711::M2711(const EventHandler &e) : Minion(e) {
    this->set_id(2711);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Aspirant d’Orgrimmar");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2711::init() {
}
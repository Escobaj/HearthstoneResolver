//
// Created by Jo on 19/12/2016.
//

#include "M2023.h"

M2023::M2023(const EventHandler &e) : Minion(e) {
    this->set_id(2023);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Cliquetteur perce-vrille");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M2023::init() {
}
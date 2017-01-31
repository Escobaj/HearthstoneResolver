//
// Created by Jo on 19/12/2016.
//

#include "M2024.h"

M2024::M2024(const EventHandler &e) : Minion(e) {
    this->set_id(2024);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Mastodonte de fer");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M2024::init() {
}
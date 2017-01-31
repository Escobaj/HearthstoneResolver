//
// Created by Jo on 19/12/2016.
//

#include "M1934.h"

M1934::M1934(const EventHandler &e) : Minion(e) {
    this->set_id(1934);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Explomage gobelin");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M1934::init() {
}
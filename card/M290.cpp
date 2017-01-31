//
// Created by Jo on 19/12/2016.
//

#include "M290.h"

M290::M290(const EventHandler &e) : Minion(e) {
    this->set_id(290);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Chouette bec-de-fer");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M290::init() {
}
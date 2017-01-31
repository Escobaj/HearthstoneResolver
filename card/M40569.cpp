//
// Created by Jo on 19/12/2016.
//

#include "M40569.h"

M40569::M40569(const EventHandler &e) : Minion(e) {
    this->set_id(40569);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Usurière des Dessoudeurs");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M40569::init() {
}
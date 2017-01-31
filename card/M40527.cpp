//
// Created by Jo on 19/12/2016.
//

#include "M40527.h"

M40527::M40527(const EventHandler &e) : Minion(e) {
    this->set_id(40527);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Esprit de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M40527::init() {
}
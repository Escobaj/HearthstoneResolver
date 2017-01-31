//
// Created by Jo on 19/12/2016.
//

#include "M1858.h"

M1858::M1858(const EventHandler &e) : Minion(e) {
    this->set_id(1858);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Limon résonnant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M1858::init() {
}
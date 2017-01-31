//
// Created by Jo on 19/12/2016.
//

#include "M1659.h"

M1659::M1659(const EventHandler &e) : Minion(e) {
    this->set_id(1659);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Acolyte de la souffrance");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M1659::init() {
}
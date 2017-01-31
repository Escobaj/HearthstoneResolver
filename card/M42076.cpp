//
// Created by Jo on 19/12/2016.
//

#include "M42076.h"

M42076::M42076(const EventHandler &e) : Minion(e) {
    this->set_id(42076);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Transfert Oméga");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M42076::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M1785.h"

M1785::M1785(const EventHandler &e) : Minion(e) {
    this->set_id(1785);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Destrier de la mort");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M1785::init() {
}
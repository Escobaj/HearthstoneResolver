//
// Created by Jo on 19/12/2016.
//

#include "M1651.h"

M1651::M1651(const EventHandler &e) : Minion(e) {
    this->set_id(1651);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Prophète du Cercle terrestre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1651::init() {
}
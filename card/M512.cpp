//
// Created by Jo on 19/12/2016.
//

#include "M512.h"

M512::M512(const EventHandler &e) : Minion(e) {
    this->set_id(512);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Élémentaire de givre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M512::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M1372.h"

M1372::M1372(const EventHandler &e) : Minion(e) {
    this->set_id(1372);
    this->set_attackMax(8);
    this->set_defaultCost(25);
    this->set_name("Géant de lave");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M1372::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M39453.h"

M39453::M39453(const EventHandler &e) : Minion(e) {
    this->set_id(39453);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Moroes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39453::init() {
}
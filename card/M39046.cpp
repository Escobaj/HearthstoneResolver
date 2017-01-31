//
// Created by Jo on 19/12/2016.
//

#include "M39046.h"

M39046::M39046(const EventHandler &e) : Minion(e) {
    this->set_id(39046);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Nat le sombre pêcheur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M39046::init() {
}
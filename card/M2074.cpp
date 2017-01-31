//
// Created by Jo on 19/12/2016.
//

#include "M2074.h"

M2074::M2074(const EventHandler &e) : Minion(e) {
    this->set_id(2074);
    this->set_attackMax(1);
    this->set_defaultCost(5);
    this->set_name("Brik-à-bot");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(1);
    this->set_maxHealth(5);
}

void M2074::init() {
}
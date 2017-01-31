//
// Created by Jo on 19/12/2016.
//

#include "M39841.h"

M39841::M39841(const EventHandler &e) : Minion(e) {
    this->set_id(39841);
    this->set_attackMax(7);
    this->set_defaultCost(8);
    this->set_name("Medivh, le Gardien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M39841::init() {
}
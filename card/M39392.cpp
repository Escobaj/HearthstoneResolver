//
// Created by Jo on 19/12/2016.
//

#include "M39392.h"

M39392::M39392(const EventHandler &e) : Minion(e) {
    this->set_id(39392);
    this->set_attackMax(4);
    this->set_defaultCost(7);
    this->set_name("Reine noire");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M39392::init() {
}
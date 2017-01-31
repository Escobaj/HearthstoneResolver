//
// Created by Jo on 19/12/2016.
//

#include "M41567.h"

M41567::M41567(const EventHandler &e) : Minion(e) {
    this->set_id(41567);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Rat déloyal");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M41567::init() {
}
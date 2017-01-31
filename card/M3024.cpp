//
// Created by Jo on 19/12/2016.
//

#include "M3024.h"

M3024::M3024(const EventHandler &e) : Minion(e) {
    this->set_id(3024);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Dean Ayala");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(5);
}

void M3024::init() {
}
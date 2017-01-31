//
// Created by Jo on 19/12/2016.
//

#include "M3033.h"

M3033::M3033(const EventHandler &e) : Minion(e) {
    this->set_id(3033);
    this->set_attackMax(7);
    this->set_defaultCost(6);
    this->set_name("Jomaro Kindred");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(6);
}

void M3033::init() {
}
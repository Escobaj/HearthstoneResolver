//
// Created by Jo on 19/12/2016.
//

#include "M284.h"

M284::M284(const EventHandler &e) : Minion(e) {
    this->set_id(284);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Ingénieur novice");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M284::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M1776.h"

M1776::M1776(const EventHandler &e) : Minion(e) {
    this->set_id(1776);
    this->set_attackMax(9);
    this->set_defaultCost(7);
    this->set_name("Hamilton Chu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(9);
    this->set_maxHealth(5);
}

void M1776::init() {
}
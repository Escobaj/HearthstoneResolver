//
// Created by Jo on 19/12/2016.
//

#include "M39872.h"

M39872::M39872(const EventHandler &e) : Minion(e) {
    this->set_id(39872);
    this->set_attackMax(7);
    this->set_defaultCost(0);
    this->set_name("Yogg-Saron Test (Manual)");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(5);
}

void M39872::init() {
}
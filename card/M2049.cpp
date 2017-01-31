//
// Created by Jo on 19/12/2016.
//

#include "M2049.h"

M2049::M2049(const EventHandler &e) : Minion(e) {
    this->set_id(2049);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Traqueur gloubelin");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2049::init() {
}
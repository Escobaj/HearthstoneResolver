//
// Created by Jo on 19/12/2016.
//

#include "M2291.h"

M2291::M2291(const EventHandler &e) : Minion(e) {
    this->set_id(2291);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Furtif sombrefer");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2291::init() {
}
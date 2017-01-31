//
// Created by Jo on 19/12/2016.
//

#include "M2435.h"

M2435::M2435(const EventHandler &e) : Minion(e) {
    this->set_id(2435);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Prototype chromatique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M2435::init() {
}
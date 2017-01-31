//
// Created by Jo on 19/12/2016.
//

#include "M2125.h"

M2125::M2125(const EventHandler &e) : Minion(e) {
    this->set_id(2125);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Sire Zeliek");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(7);
}

void M2125::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2686.h"

M2686::M2686(const EventHandler &e) : Minion(e) {
    this->set_id(2686);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Garr");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(8);
}

void M2686::init() {
}
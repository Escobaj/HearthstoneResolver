//
// Created by Jo on 19/12/2016.
//

#include "M2315.h"

M2315::M2315(const EventHandler &e) : Minion(e) {
    this->set_id(2315);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Videur sombrefer");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(8);
}

void M2315::init() {
}
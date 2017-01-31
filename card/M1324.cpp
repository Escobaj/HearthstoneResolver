//
// Created by Jo on 19/12/2016.
//

#include "M1324.h"

M1324::M1324(const EventHandler &e) : Minion(e) {
    this->set_id(1324);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Gnoll massif");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(2);
}

void M1324::init() {
}
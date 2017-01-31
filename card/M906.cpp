//
// Created by Jo on 19/12/2016.
//

#include "M906.h"

M906::M906(const EventHandler &e) : Minion(e) {
    this->set_id(906);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Limon des marais acide");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M906::init() {
}
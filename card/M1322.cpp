//
// Created by Jo on 19/12/2016.
//

#include "M1322.h"

M1322::M1322(const EventHandler &e) : Minion(e) {
    this->set_id(1322);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Gnoll");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1322::init() {
}
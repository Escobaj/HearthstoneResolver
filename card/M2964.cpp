//
// Created by Jo on 19/12/2016.
//

#include "M2964.h"

M2964::M2964(const EventHandler &e) : Minion(e) {
    this->set_id(2964);
    this->set_attackMax(7);
    this->set_defaultCost(9);
    this->set_name("Prince voleur Rafaam");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(8);
}

void M2964::init() {
}
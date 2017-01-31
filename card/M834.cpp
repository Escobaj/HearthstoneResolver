//
// Created by Jo on 19/12/2016.
//

#include "M834.h"

M834::M834(const EventHandler &e) : Minion(e) {
    this->set_id(834);
    this->set_attackMax(12);
    this->set_defaultCost(10);
    this->set_name("Aile de mort");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(12);
    this->set_maxHealth(12);
}

void M834::init() {
}
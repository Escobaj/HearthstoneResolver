//
// Created by Jo on 19/12/2016.
//

#include "M40611.h"

M40611::M40611(const EventHandler &e) : Minion(e) {
    this->set_id(40611);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Chopper huran de Tanaris");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M40611::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M40696.h"

M40696::M40696(const EventHandler &e) : Minion(e) {
    this->set_id(40696);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Passeur de Gadgetzan");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M40696::init() {
}
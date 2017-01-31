//
// Created by Jo on 19/12/2016.
//

#include "M39476.h"

M39476::M39476(const EventHandler &e) : Minion(e) {
    this->set_id(39476);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Comédien pompeux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M39476::init() {
}
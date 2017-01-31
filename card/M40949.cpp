//
// Created by Jo on 19/12/2016.
//

#include "M40949.h"

M40949::M40949(const EventHandler &e) : Minion(e) {
    this->set_id(40949);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Mondaine de Gadgetzan");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40949::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M40889.h"

M40889::M40889(const EventHandler &e) : Minion(e) {
    this->set_id(40889);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Corsaire naga");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M40889::init() {
}
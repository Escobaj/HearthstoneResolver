//
// Created by Jo on 19/12/2016.
//

#include "M40261.h"

M40261::M40261(const EventHandler &e) : Minion(e) {
    this->set_id(40261);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Singe volant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(2);
}

void M40261::init() {
}
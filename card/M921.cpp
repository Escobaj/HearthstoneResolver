//
// Created by Jo on 19/12/2016.
//

#include "M921.h"

M921::M921(const EventHandler &e) : Minion(e) {
    this->set_id(921);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Panthère de la jungle");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M921::init() {
}
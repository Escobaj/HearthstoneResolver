//
// Created by Jo on 19/12/2016.
//

#include "M2038.h"

M2038::M2038(const EventHandler &e) : Minion(e) {
    this->set_id(2038);
    this->set_attackMax(7);
    this->set_defaultCost(5);
    this->set_name("Mataf");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(7);
    this->set_maxHealth(4);
}

void M2038::init() {
}
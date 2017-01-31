//
// Created by Jo on 19/12/2016.
//

#include "M932.h"

M932::M932(const EventHandler &e) : Minion(e) {
    this->set_id(932);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Commissaire-priseur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M932::init() {
}
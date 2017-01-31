//
// Created by Jo on 19/12/2016.
//

#include "M389.h"

M389::M389(const EventHandler &e) : Minion(e) {
    this->set_id(389);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Archère elfe");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M389::init() {
}
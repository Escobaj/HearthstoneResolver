//
// Created by Jo on 19/12/2016.
//

#include "M289.h"

M289::M289(const EventHandler &e) : Minion(e) {
    this->set_id(289);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Chevaucheur de loup");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(1);
}

void M289::init() {
}
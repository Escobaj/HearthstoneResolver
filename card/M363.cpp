//
// Created by Jo on 19/12/2016.
//

#include "M363.h"

M363::M363(const EventHandler &e) : Minion(e) {
    this->set_id(363);
    this->set_attackMax(8);
    this->set_defaultCost(9);
    this->set_name("Onyxia");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M363::init() {
}
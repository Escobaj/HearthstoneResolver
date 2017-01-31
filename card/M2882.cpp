//
// Created by Jo on 19/12/2016.
//

#include "M2882.h"

M2882::M2882(const EventHandler &e) : Minion(e) {
    this->set_id(2882);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Serpent de la fosse");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2882::init() {
}
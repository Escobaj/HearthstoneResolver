//
// Created by Jo on 19/12/2016.
//

#include "M606.h"

M606::M606(const EventHandler &e) : Minion(e) {
    this->set_id(606);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Loup des bois");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M606::init() {
}
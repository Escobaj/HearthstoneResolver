//
// Created by Jo on 19/12/2016.
//

#include "M2290.h"

M2290::M2290(const EventHandler &e) : Minion(e) {
    this->set_id(2290);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Destructeur garde du feu");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M2290::init() {
}
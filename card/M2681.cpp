//
// Created by Jo on 19/12/2016.
//

#include "M2681.h"

M2681::M2681(const EventHandler &e) : Minion(e) {
    this->set_id(2681);
    this->set_attackMax(7);
    this->set_defaultCost(6);
    this->set_name("Le chevalier squelette");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(4);
}

void M2681::init() {
}
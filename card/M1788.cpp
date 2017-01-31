//
// Created by Jo on 19/12/2016.
//

#include "M1788.h"

M1788::M1788(const EventHandler &e) : Minion(e) {
    this->set_id(1788);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Nécro-chevalier");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M1788::init() {
}
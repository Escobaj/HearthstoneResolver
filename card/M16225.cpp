//
// Created by Jo on 19/12/2016.
//

#include "M16225.h"

M16225::M16225(const EventHandler &e) : Minion(e) {
    this->set_id(16225);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Totem de courroux de l’air");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M16225::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M458.h"

M458::M458(const EventHandler &e) : Minion(e) {
    this->set_id(458);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Totem de courroux de l’air");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::TOTEM);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M458::init() {
}
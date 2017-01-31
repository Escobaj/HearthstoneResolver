//
// Created by Jo on 19/12/2016.
//

#include "M1281.h"

M1281::M1281(const EventHandler &e) : Minion(e) {
    this->set_id(1281);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Hyène charognarde");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1281::init() {
}
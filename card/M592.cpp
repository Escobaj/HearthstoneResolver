//
// Created by Jo on 19/12/2016.
//

#include "M592.h"

M592::M592(const EventHandler &e) : Minion(e) {
    this->set_id(592);
    this->set_attackMax(4);
    this->set_defaultCost(2);
    this->set_name("Succube");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M592::init() {
}
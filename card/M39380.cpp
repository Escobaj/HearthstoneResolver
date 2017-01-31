//
// Created by Jo on 19/12/2016.
//

#include "M39380.h"

M39380::M39380(const EventHandler &e) : Minion(e) {
    this->set_id(39380);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Golem d’argenterie");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M39380::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M39754.h"

M39754::M39754(const EventHandler &e) : Minion(e) {
    this->set_id(39754);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Abyssal");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M39754::init() {
}
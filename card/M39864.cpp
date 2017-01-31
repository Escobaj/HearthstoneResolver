//
// Created by Jo on 19/12/2016.
//

#include "M39864.h"

M39864::M39864(const EventHandler &e) : Minion(e) {
    this->set_id(39864);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Kil’rek");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M39864::init() {
}
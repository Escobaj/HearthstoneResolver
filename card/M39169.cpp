//
// Created by Jo on 19/12/2016.
//

#include "M39169.h"

M39169::M39169(const EventHandler &e) : Minion(e) {
    this->set_id(39169);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Grimoire bavard");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39169::init() {
}
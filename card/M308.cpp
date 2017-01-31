//
// Created by Jo on 19/12/2016.
//

#include "M308.h"

M308::M308(const EventHandler &e) : Minion(e) {
    this->set_id(308);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Inventrice gnome");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M308::init() {
}
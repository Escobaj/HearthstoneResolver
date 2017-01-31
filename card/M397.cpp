//
// Created by Jo on 19/12/2016.
//

#include "M397.h"

M397::M397(const EventHandler &e) : Minion(e) {
    this->set_id(397);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Goule mangeuse de chair");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M397::init() {
}
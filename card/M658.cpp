//
// Created by Jo on 19/12/2016.
//

#include "M658.h"

M658::M658(const EventHandler &e) : Minion(e) {
    this->set_id(658);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Gnome lépreux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M658::init() {
}
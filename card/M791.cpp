//
// Created by Jo on 19/12/2016.
//

#include "M791.h"

M791::M791(const EventHandler &e) : Minion(e) {
    this->set_id(791);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Aventurier en pleine quête");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M791::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2881.h"

M2881::M2881(const EventHandler &e) : Minion(e) {
    this->set_id(2881);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Destructeur d’obsidienne");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2881::init() {
}
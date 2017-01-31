//
// Created by Jo on 19/12/2016.
//

#include "M39477.h"

M39477::M39477(const EventHandler &e) : Minion(e) {
    this->set_id(39477);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Templier Plaie-de-nuit");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M39477::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M100.h"

M100::M100(const EventHandler &e) : Minion(e) {
    this->set_id(100);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Souffleur");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M100::init() {
}
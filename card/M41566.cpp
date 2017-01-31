//
// Created by Jo on 19/12/2016.
//

#include "M41566.h"

M41566::M41566(const EventHandler &e) : Minion(e) {
    this->set_id(41566);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Maîtresse des mélanges");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M41566::init() {
}
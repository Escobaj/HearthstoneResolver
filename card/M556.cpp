//
// Created by Jo on 19/12/2016.
//

#include "M556.h"

M556::M556(const EventHandler &e) : Minion(e) {
    this->set_id(556);
    this->set_attackMax(7);
    this->set_defaultCost(6);
    this->set_name("Illidan Hurlorage");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(7);
    this->set_maxHealth(5);
}

void M556::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2017.h"

M2017::M2017(const EventHandler &e) : Minion(e) {
    this->set_id(2017);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Gahz’rilla");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(6);
    this->set_maxHealth(9);
}

void M2017::init() {
}
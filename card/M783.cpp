//
// Created by Jo on 19/12/2016.
//

#include "M783.h"

M783::M783(const EventHandler &e) : Minion(e) {
    this->set_id(783);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Seigneur des abîmes");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M783::init() {
}
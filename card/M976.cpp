//
// Created by Jo on 19/12/2016.
//

#include "M976.h"

M976::M976(const EventHandler &e) : Minion(e) {
    this->set_id(976);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Chasse-marée murloc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M976::init() {
}
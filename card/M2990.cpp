//
// Created by Jo on 19/12/2016.
//

#include "M2990.h"

M2990::M2990(const EventHandler &e) : Minion(e) {
    this->set_id(2990);
    this->set_attackMax(0);
    this->set_defaultCost(4);
    this->set_name("Rocher roulant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M2990::init() {
}
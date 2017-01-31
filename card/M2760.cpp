//
// Created by Jo on 19/12/2016.
//

#include "M2760.h"

M2760::M2760(const EventHandler &e) : Minion(e) {
    this->set_id(2760);
    this->set_attackMax(7);
    this->set_defaultCost(10);
    this->set_name("Varian Wrynn");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2760::init() {
}
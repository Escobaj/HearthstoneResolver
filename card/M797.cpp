//
// Created by Jo on 19/12/2016.
//

#include "M797.h"

M797::M797(const EventHandler &e) : Minion(e) {
    this->set_id(797);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Puits de lumière");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(5);
}

void M797::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2884.h"

M2884::M2884(const EventHandler &e) : Minion(e) {
    this->set_id(2884);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Pilleur de tombes");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2884::init() {
}
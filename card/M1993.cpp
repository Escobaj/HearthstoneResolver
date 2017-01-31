//
// Created by Jo on 19/12/2016.
//

#include "M1993.h"

M1993::M1993(const EventHandler &e) : Minion(e) {
    this->set_id(1993);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Prince marchand Gallywix");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(8);
}

void M1993::init() {
}
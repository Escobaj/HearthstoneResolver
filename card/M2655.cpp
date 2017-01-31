//
// Created by Jo on 19/12/2016.
//

#include "M2655.h"

M2655::M2655(const EventHandler &e) : Minion(e) {
    this->set_id(2655);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Chevalier murloc");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2655::init() {
}
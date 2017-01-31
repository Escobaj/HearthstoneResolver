//
// Created by Jo on 19/12/2016.
//

#include "M2727.h"

M2727::M2727(const EventHandler &e) : Minion(e) {
    this->set_id(2727);
    this->set_attackMax(3);
    this->set_defaultCost(7);
    this->set_name("Eadric le Pur");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(7);
}

void M2727::init() {
}
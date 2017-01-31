//
// Created by Jo on 19/12/2016.
//

#include "M2689.h"

M2689::M2689(const EventHandler &e) : Minion(e) {
    this->set_id(2689);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Juge Supérieur Mornepierre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M2689::init() {
}
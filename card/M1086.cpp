//
// Created by Jo on 19/12/2016.
//

#include "M1086.h"

M1086::M1086(const EventHandler &e) : Minion(e) {
    this->set_id(1086);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Courbe-sort");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M1086::init() {
}
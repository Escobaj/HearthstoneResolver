//
// Created by Jo on 19/12/2016.
//

#include "M16236.h"

M16236::M16236(const EventHandler &e) : Minion(e) {
    this->set_id(16236);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Poursuivant terrestre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M16236::init() {
}
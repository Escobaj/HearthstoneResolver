//
// Created by Jo on 19/12/2016.
//

#include "M2777.h"

M2777::M2777(const EventHandler &e) : Minion(e) {
    this->set_id(2777);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Minuscule chevalier maléfique");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2777::init() {
}
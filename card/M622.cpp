//
// Created by Jo on 19/12/2016.
//

#include "M622.h"

M622::M622(const EventHandler &e) : Minion(e) {
    this->set_id(622);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Chevalier de Hurlevent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M622::init() {
}
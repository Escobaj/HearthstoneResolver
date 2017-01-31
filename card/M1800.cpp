//
// Created by Jo on 19/12/2016.
//

#include "M1800.h"

M1800::M1800(const EventHandler &e) : Minion(e) {
    this->set_id(1800);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Seigneur de la toile nérub’ar");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M1800::init() {
}
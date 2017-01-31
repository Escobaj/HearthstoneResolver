//
// Created by Jo on 19/12/2016.
//

#include "M1881.h"

M1881::M1881(const EventHandler &e) : Minion(e) {
    this->set_id(1881);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Sire Zeliek");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(7);
}

void M1881::init() {
}
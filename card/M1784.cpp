//
// Created by Jo on 19/12/2016.
//

#include "M1784.h"

M1784::M1784(const EventHandler &e) : Minion(e) {
    this->set_id(1784);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Ombre de Naxxramas");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1784::init() {
}
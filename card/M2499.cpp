//
// Created by Jo on 19/12/2016.
//

#include "M2499.h"

M2499::M2499(const EventHandler &e) : Minion(e) {
    this->set_id(2499);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Spectateur du tournoi");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2499::init() {
}
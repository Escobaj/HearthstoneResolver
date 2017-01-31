//
// Created by Jo on 19/12/2016.
//

#include "M2726.h"

M2726::M2726(const EventHandler &e) : Minion(e) {
    this->set_id(2726);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Adversaire mystérieux");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2726::init() {
}
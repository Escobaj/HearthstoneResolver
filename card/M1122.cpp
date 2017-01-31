//
// Created by Jo on 19/12/2016.
//

#include "M1122.h"

M1122::M1122(const EventHandler &e) : Minion(e) {
    this->set_id(1122);
    this->set_attackMax(7);
    this->set_defaultCost(5);
    this->set_name("Nervi de la KapitalRisk");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(6);
}

void M1122::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M358.h"

M358::M358(const EventHandler &e) : Minion(e) {
    this->set_id(358);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Tréant");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M358::init() {
}
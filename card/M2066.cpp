//
// Created by Jo on 19/12/2016.
//

#include "M2066.h"

M2066::M2066(const EventHandler &e) : Minion(e) {
    this->set_id(2066);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Infanterie de Gnomeregan");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M2066::init() {
}
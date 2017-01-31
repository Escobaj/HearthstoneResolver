//
// Created by Jo on 19/12/2016.
//

#include "M16885.h"

M16885::M16885(const EventHandler &e) : Minion(e) {
    this->set_id(16885);
    this->set_attackMax(0);
    this->set_defaultCost(8);
    this->set_name("Statue vengeresse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(9);
}

void M16885::init() {
}
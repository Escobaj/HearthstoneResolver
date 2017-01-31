//
// Created by Jo on 19/12/2016.
//

#include "M257.h"

M257::M257(const EventHandler &e) : Minion(e) {
    this->set_id(257);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Chasseuse de Tranchebauge");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M257::init() {
}
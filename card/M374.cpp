//
// Created by Jo on 19/12/2016.
//

#include "M374.h"

M374::M374(const EventHandler &e) : Minion(e) {
    this->set_id(374);
    this->set_attackMax(8);
    this->set_defaultCost(8);
    this->set_name("Ragnaros, seigneur du feu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M374::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M9107.h"

M9107::M9107(const EventHandler &e) : Minion(e) {
    this->set_id(9107);
    this->set_attackMax(7);
    this->set_defaultCost(4);
    this->set_name("Statue sinistre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M9107::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M3020.h"

M3020::M3020(const EventHandler &e) : Minion(e) {
    this->set_id(3020);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Brian Birmingham");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M3020::init() {
}
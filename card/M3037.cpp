//
// Created by Jo on 19/12/2016.
//

#include "M3037.h"

M3037::M3037(const EventHandler &e) : Minion(e) {
    this->set_id(3037);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Ricardo Robaina");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M3037::init() {
}
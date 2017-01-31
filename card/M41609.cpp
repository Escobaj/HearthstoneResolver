//
// Created by Jo on 19/12/2016.
//

#include "M41609.h"

M41609::M41609(const EventHandler &e) : Minion(e) {
    this->set_id(41609);
    this->set_attackMax(0);
    this->set_defaultCost(10);
    this->set_name("Nefarian");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(0);
    this->set_maxHealth(200);
}

void M41609::init() {
}
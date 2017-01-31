//
// Created by Jo on 19/12/2016.
//

#include "M2007.h"

M2007::M2007(const EventHandler &e) : Minion(e) {
    this->set_id(2007);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Totem de vitalité");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::TOTEM);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M2007::init() {
}
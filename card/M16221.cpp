//
// Created by Jo on 19/12/2016.
//

#include "M16221.h"

M16221::M16221(const EventHandler &e) : Minion(e) {
    this->set_id(16221);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Totem de soins");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M16221::init() {
}
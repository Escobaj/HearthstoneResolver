//
// Created by Jo on 19/12/2016.
//

#include "M16222.h"

M16222::M16222(const EventHandler &e) : Minion(e) {
    this->set_id(16222);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("Totem incendiaire");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M16222::init() {
}
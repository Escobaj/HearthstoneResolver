//
// Created by Jo on 19/12/2016.
//

#include "M2945.h"

M2945::M2945(const EventHandler &e) : Minion(e) {
    this->set_id(2945);
    this->set_attackMax(8);
    this->set_defaultCost(8);
    this->set_name("Diablosaure fossilisé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M2945::init() {
}
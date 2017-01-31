//
// Created by Jo on 19/12/2016.
//

#include "M753.h"

M753::M753(const EventHandler &e) : Minion(e) {
    this->set_id(753);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Champion de Hurlevent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M753::init() {
}
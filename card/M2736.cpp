//
// Created by Jo on 19/12/2016.
//

#include "M2736.h"

M2736::M2736(const EventHandler &e) : Minion(e) {
    this->set_id(2736);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Justicière Cœur-Vrai");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(3);
}

void M2736::init() {
}
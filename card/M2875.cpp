//
// Created by Jo on 19/12/2016.
//

#include "M2875.h"

M2875::M2875(const EventHandler &e) : Minion(e) {
    this->set_id(2875);
    this->set_attackMax(6);
    this->set_defaultCost(5);
    this->set_name("Adjurateur éthérien");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(3);
}

void M2875::init() {
}
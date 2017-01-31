//
// Created by Jo on 19/12/2016.
//

#include "M2005.h"

M2005::M2005(const EventHandler &e) : Minion(e) {
    this->set_id(2005);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Zap-o-matic tournoyant");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2005::init() {
}
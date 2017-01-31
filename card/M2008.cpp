//
// Created by Jo on 19/12/2016.
//

#include "M2008.h"

M2008::M2008(const EventHandler &e) : Minion(e) {
    this->set_id(2008);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Marche-esprit aileron vaseux");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M2008::init() {
}
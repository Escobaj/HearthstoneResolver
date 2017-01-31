//
// Created by Jo on 19/12/2016.
//

#include "M2782.h"

M2782::M2782(const EventHandler &e) : Minion(e) {
    this->set_id(2782);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Aspirante de Darnassus");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2782::init() {
}
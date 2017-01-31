//
// Created by Jo on 19/12/2016.
//

#include "M2888.h"

M2888::M2888(const EventHandler &e) : Minion(e) {
    this->set_id(2888);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Élémentaire grondant");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M2888::init() {
}
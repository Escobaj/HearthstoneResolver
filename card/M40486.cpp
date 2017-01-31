//
// Created by Jo on 19/12/2016.
//

#include "M40486.h"

M40486::M40486(const EventHandler &e) : Minion(e) {
    this->set_id(40486);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Regard de nacre");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40486::init() {
}
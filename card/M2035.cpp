//
// Created by Jo on 19/12/2016.
//

#include "M2035.h"

M2035::M2035(const EventHandler &e) : Minion(e) {
    this->set_id(2035);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Trogg brisepierre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2035::init() {
}
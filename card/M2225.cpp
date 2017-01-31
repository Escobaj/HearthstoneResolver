//
// Created by Jo on 19/12/2016.
//

#include "M2225.h"

M2225::M2225(const EventHandler &e) : Minion(e) {
    this->set_id(2225);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Sylvenier du Bosquet");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2225::init() {
}
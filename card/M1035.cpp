//
// Created by Jo on 19/12/2016.
//

#include "M1035.h"

M1035::M1035(const EventHandler &e) : Minion(e) {
    this->set_id(1035);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Ancien de la guerre");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M1035::init() {
}
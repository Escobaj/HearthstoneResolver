//
// Created by Jo on 19/12/2016.
//

#include "M2292.h"

M2292::M2292(const EventHandler &e) : Minion(e) {
    this->set_id(2292);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Druidesse de la Flamme");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2292::init() {
}
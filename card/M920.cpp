//
// Created by Jo on 19/12/2016.
//

#include "M920.h"

M920::M920(const EventHandler &e) : Minion(e) {
    this->set_id(920);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Ancien du savoir");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M920::init() {
}
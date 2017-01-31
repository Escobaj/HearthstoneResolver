//
// Created by Jo on 19/12/2016.
//

#include "M2642.h"

M2642::M2642(const EventHandler &e) : Minion(e) {
    this->set_id(2642);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Brave archère");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2642::init() {
}
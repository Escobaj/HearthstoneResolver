//
// Created by Jo on 19/12/2016.
//

#include "M2783.h"

M2783::M2783(const EventHandler &e) : Minion(e) {
    this->set_id(2783);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Druidesse du Sabre");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2783::init() {
}
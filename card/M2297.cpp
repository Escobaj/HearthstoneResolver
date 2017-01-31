//
// Created by Jo on 19/12/2016.
//

#include "M2297.h"

M2297::M2297(const EventHandler &e) : Minion(e) {
    this->set_id(2297);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Lanceur de hache");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M2297::init() {
}
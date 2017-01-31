//
// Created by Jo on 19/12/2016.
//

#include "M2281.h"

M2281::M2281(const EventHandler &e) : Minion(e) {
    this->set_id(2281);
    this->set_attackMax(9);
    this->set_defaultCost(9);
    this->set_name("Chambellan Executus");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(9);
    this->set_maxHealth(7);
}

void M2281::init() {
}
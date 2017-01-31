//
// Created by Jo on 19/12/2016.
//

#include "M2780.h"

M2780::M2780(const EventHandler &e) : Minion(e) {
    this->set_id(2780);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Combattant sauvage");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2780::init() {
}
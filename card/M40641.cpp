//
// Created by Jo on 19/12/2016.
//

#include "M40641.h"

M40641::M40641(const EventHandler &e) : Minion(e) {
    this->set_id(40641);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Sensei virmen");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M40641::init() {
}
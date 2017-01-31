//
// Created by Jo on 19/12/2016.
//

#include "M40577.h"

M40577::M40577(const EventHandler &e) : Minion(e) {
    this->set_id(40577);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Marshal malhonnête");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M40577::init() {
}
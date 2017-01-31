//
// Created by Jo on 19/12/2016.
//

#include "M40329.h"

M40329::M40329(const EventHandler &e) : Minion(e) {
    this->set_id(40329);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Kil’rek");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(4);
    this->set_maxHealth(8);
}

void M40329::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M812.h"

M812::M812(const EventHandler &e) : Minion(e) {
    this->set_id(812);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Panthère");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M812::init() {
}
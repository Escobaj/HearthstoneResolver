//
// Created by Jo on 19/12/2016.
//

#include "M601.h"

M601::M601(const EventHandler &e) : Minion(e) {
    this->set_id(601);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Gardien du bosquet");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M601::init() {
}
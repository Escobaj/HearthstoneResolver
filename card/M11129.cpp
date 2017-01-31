//
// Created by Jo on 19/12/2016.
//

#include "M11129.h"

M11129::M11129(const EventHandler &e) : Minion(e) {
    this->set_id(11129);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Tim Erskine");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M11129::init() {
}
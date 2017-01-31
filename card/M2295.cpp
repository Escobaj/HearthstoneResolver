//
// Created by Jo on 19/12/2016.
//

#include "M2295.h"

M2295::M2295(const EventHandler &e) : Minion(e) {
    this->set_id(2295);
    this->set_attackMax(7);
    this->set_defaultCost(9);
    this->set_name("Lourdaud volcanique");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(8);
}

void M2295::init() {
}
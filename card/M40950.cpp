//
// Created by Jo on 19/12/2016.
//

#include "M40950.h"

M40950::M40950(const EventHandler &e) : Minion(e) {
    this->set_id(40950);
    this->set_attackMax(6);
    this->set_defaultCost(4);
    this->set_name("Motard worgen");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(3);
}

void M40950::init() {
}
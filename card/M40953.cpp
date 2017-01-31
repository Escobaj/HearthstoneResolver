//
// Created by Jo on 19/12/2016.
//

#include "M40953.h"

M40953::M40953(const EventHandler &e) : Minion(e) {
    this->set_id(40953);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Gangsters, hé ho !");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40953::init() {
}
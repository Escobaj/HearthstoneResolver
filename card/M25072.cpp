//
// Created by Jo on 19/12/2016.
//

#include "M25072.h"

M25072::M25072(const EventHandler &e) : Minion(e) {
    this->set_id(25072);
    this->set_attackMax(10);
    this->set_defaultCost(1);
    this->set_name("Statue animée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M25072::init() {
}
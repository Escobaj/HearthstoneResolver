//
// Created by Jo on 19/12/2016.
//

#include "M40684.h"

M40684::M40684(const EventHandler &e) : Minion(e) {
    this->set_id(40684);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Enrage-bête trogg");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M40684::init() {
}
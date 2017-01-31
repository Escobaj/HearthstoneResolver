//
// Created by Jo on 19/12/2016.
//

#include "M41.h"

M41::M41(const EventHandler &e) : Minion(e) {
    this->set_id(41);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Grunt loup-de-givre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M41::init() {
}
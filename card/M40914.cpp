//
// Created by Jo on 19/12/2016.
//

#include "M40914.h"

M40914::M40914(const EventHandler &e) : Minion(e) {
    this->set_id(40914);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Barman amical");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M40914::init() {
}
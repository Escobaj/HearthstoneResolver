//
// Created by Jo on 19/12/2016.
//

#include "M678.h"

M678::M678(const EventHandler &e) : Minion(e) {
    this->set_id(678);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Tréant");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M678::init() {
}
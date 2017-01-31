//
// Created by Jo on 19/12/2016.
//

#include "M40701.h"

M40701::M40701(const EventHandler &e) : Minion(e) {
    this->set_id(40701);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Maître des encres Solia");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40701::init() {
}
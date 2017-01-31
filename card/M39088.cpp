//
// Created by Jo on 19/12/2016.
//

#include "M39088.h"

M39088::M39088(const EventHandler &e) : Minion(e) {
    this->set_id(39088);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Sire Zeliek");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(5);
}

void M39088::init() {
}
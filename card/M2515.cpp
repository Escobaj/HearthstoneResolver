//
// Created by Jo on 19/12/2016.
//

#include "M2515.h"

M2515::M2515(const EventHandler &e) : Minion(e) {
    this->set_id(2515);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Maître des chevaux de guerre");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2515::init() {
}
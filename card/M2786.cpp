//
// Created by Jo on 19/12/2016.
//

#include "M2786.h"

M2786::M2786(const EventHandler &e) : Minion(e) {
    this->set_id(2786);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Marcheuse sauvage");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2786::init() {
}
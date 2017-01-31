//
// Created by Jo on 19/12/2016.
//

#include "M2555.h"

M2555::M2555(const EventHandler &e) : Minion(e) {
    this->set_id(2555);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Championne sacrée");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M2555::init() {
}
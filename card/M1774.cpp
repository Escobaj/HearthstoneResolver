//
// Created by Jo on 19/12/2016.
//

#include "M1774.h"

M1774::M1774(const EventHandler &e) : Minion(e) {
    this->set_id(1774);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Yong Woo");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M1774::init() {
}
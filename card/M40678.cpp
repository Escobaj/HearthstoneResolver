//
// Created by Jo on 19/12/2016.
//

#include "M40678.h"

M40678::M40678(const EventHandler &e) : Minion(e) {
    this->set_id(40678);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Phalanges");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(7);
}

void M40678::init() {
}
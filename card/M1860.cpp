//
// Created by Jo on 19/12/2016.
//

#include "M1860.h"

M1860::M1860(const EventHandler &e) : Minion(e) {
    this->set_id(1860);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Tisseuse");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1860::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M482.h"

M482::M482(const EventHandler &e) : Minion(e) {
    this->set_id(482);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Écuyer");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M482::init() {
}
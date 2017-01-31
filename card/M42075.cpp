//
// Created by Jo on 19/12/2016.
//

#include "M42075.h"

M42075::M42075(const EventHandler &e) : Minion(e) {
    this->set_id(42075);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Démolisseur nain");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(5);
}

void M42075::init() {
}
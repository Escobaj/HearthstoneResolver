//
// Created by Jo on 19/12/2016.
//

#include "M242.h"

M242::M242(const EventHandler &e) : Minion(e) {
    this->set_id(242);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Sergent grossier");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M242::init() {
}
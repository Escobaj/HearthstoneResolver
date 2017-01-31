//
// Created by Jo on 19/12/2016.
//

#include "M1073.h"

M1073::M1073(const EventHandler &e) : Minion(e) {
    this->set_id(1073);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Jongleur de couteaux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1073::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M40700.h"

M40700::M40700(const EventHandler &e) : Minion(e) {
    this->set_id(40700);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Motard huran");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40700::init() {
}
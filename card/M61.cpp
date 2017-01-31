//
// Created by Jo on 19/12/2016.
//

#include "M61.h"

M61::M61(const EventHandler &e) : Minion(e) {
    this->set_id(61);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Forgeron malveillant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M61::init() {
}
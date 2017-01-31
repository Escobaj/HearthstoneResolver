//
// Created by Jo on 19/12/2016.
//

#include "M38528.h"

M38528::M38528(const EventHandler &e) : Minion(e) {
    this->set_id(38528);
    this->set_attackMax(6);
    this->set_defaultCost(5);
    this->set_name("Robot de soins corrompu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M38528::init() {
}
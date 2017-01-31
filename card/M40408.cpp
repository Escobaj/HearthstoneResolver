//
// Created by Jo on 19/12/2016.
//

#include "M40408.h"

M40408::M40408(const EventHandler &e) : Minion(e) {
    this->set_id(40408);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Kazakus");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M40408::init() {
}
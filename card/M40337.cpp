//
// Created by Jo on 19/12/2016.
//

#include "M40337.h"

M40337::M40337(const EventHandler &e) : Minion(e) {
    this->set_id(40337);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Monte-en-l’air mécanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40337::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2500.h"

M2500::M2500(const EventHandler &e) : Minion(e) {
    this->set_id(2500);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Chevalier mécanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2500::init() {
}
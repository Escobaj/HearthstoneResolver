//
// Created by Jo on 19/12/2016.
//

#include "M39578.h"

M39578::M39578(const EventHandler &e) : Minion(e) {
    this->set_id(39578);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Assiette");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39578::init() {
}
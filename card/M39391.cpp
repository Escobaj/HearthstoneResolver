//
// Created by Jo on 19/12/2016.
//

#include "M39391.h"

M39391::M39391(const EventHandler &e) : Minion(e) {
    this->set_id(39391);
    this->set_attackMax(4);
    this->set_defaultCost(7);
    this->set_name("Reine blanche");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M39391::init() {
}
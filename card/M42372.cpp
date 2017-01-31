//
// Created by Jo on 19/12/2016.
//

#include "M42372.h"

M42372::M42372(const EventHandler &e) : Minion(e) {
    this->set_id(42372);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Râtelier d’armes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M42372::init() {
}
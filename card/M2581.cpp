//
// Created by Jo on 19/12/2016.
//

#include "M2581.h"

M2581::M2581(const EventHandler &e) : Minion(e) {
    this->set_id(2581);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Maître d’escrime");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2581::init() {
}
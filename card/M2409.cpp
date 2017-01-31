//
// Created by Jo on 19/12/2016.
//

#include "M2409.h"

M2409::M2409(const EventHandler &e) : Minion(e) {
    this->set_id(2409);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Corrupteur de l’Aile noire");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2409::init() {
}
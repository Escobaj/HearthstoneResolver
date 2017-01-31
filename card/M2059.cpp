//
// Created by Jo on 19/12/2016.
//

#include "M2059.h"

M2059::M2059(const EventHandler &e) : Minion(e) {
    this->set_id(2059);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Annulateur d’Arcane X-21");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M2059::init() {
}
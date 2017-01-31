//
// Created by Jo on 19/12/2016.
//

#include "M2951.h"

M2951::M2951(const EventHandler &e) : Minion(e) {
    this->set_id(2951);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Élise Cherchétoile");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M2951::init() {
}
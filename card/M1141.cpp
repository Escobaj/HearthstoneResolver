//
// Created by Jo on 19/12/2016.
//

#include "M1141.h"

M1141::M1141(const EventHandler &e) : Minion(e) {
    this->set_id(1141);
    this->set_attackMax(7);
    this->set_defaultCost(5);
    this->set_name("Élémentaire de terre");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(8);
}

void M1141::init() {
}
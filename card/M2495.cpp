//
// Created by Jo on 19/12/2016.
//

#include "M2495.h"

M2495::M2495(const EventHandler &e) : Minion(e) {
    this->set_id(2495);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Lieutenant de la garde d’os");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2495::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2505.h"

M2505::M2505(const EventHandler &e) : Minion(e) {
    this->set_id(2505);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Guetteur d’Argent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2505::init() {
}
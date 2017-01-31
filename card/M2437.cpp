//
// Created by Jo on 19/12/2016.
//

#include "M2437.h"

M2437::M2437(const EventHandler &e) : Minion(e) {
    this->set_id(2437);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Draconien chromatique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2437::init() {
}
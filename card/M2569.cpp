//
// Created by Jo on 19/12/2016.
//

#include "M2569.h"

M2569::M2569(const EventHandler &e) : Minion(e) {
    this->set_id(2569);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Gardien du Crépuscule");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M2569::init() {
}
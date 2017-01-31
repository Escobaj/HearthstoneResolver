//
// Created by Jo on 19/12/2016.
//

#include "M2715.h"

M2715::M2715(const EventHandler &e) : Minion(e) {
    this->set_id(2715);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Boucanier");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2715::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2748.h"

M2748::M2748(const EventHandler &e) : Minion(e) {
    this->set_id(2748);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Fjola Plaie-lumineuse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2748::init() {
}
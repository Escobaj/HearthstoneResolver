//
// Created by Jo on 19/12/2016.
//

#include "M2257.h"

M2257::M2257(const EventHandler &e) : Minion(e) {
    this->set_id(2257);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Écraseur drakônide");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2257::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M757.h"

M757::M757(const EventHandler &e) : Minion(e) {
    this->set_id(757);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Écuyère d’Argent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M757::init() {
}
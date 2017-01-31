//
// Created by Jo on 19/12/2016.
//

#include "M16804.h"

M16804::M16804(const EventHandler &e) : Minion(e) {
    this->set_id(16804);
    this->set_attackMax(7);
    this->set_defaultCost(4);
    this->set_name("Garde d’Orsis");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(5);
}

void M16804::init() {
}
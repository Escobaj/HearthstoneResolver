//
// Created by Jo on 19/12/2016.
//

#include "M2043.h"

M2043::M2043(const EventHandler &e) : Minion(e) {
    this->set_id(2043);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Canon du navire");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2043::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M887.h"

M887::M887(const EventHandler &e) : Minion(e) {
    this->set_id(887);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Maîtresse du déguisement");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M887::init() {
}
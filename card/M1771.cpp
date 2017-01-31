//
// Created by Jo on 19/12/2016.
//

#include "M1771.h"

M1771::M1771(const EventHandler &e) : Minion(e) {
    this->set_id(1771);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Jay Baxter");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M1771::init() {
}
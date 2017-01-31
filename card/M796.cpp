//
// Created by Jo on 19/12/2016.
//

#include "M796.h"

M796::M796(const EventHandler &e) : Minion(e) {
    this->set_id(796);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Mouton");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M796::init() {
}
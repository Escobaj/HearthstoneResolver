//
// Created by Jo on 19/12/2016.
//

#include "M1796.h"

M1796::M1796(const EventHandler &e) : Minion(e) {
    this->set_id(1796);
    this->set_attackMax(7);
    this->set_defaultCost(5);
    this->set_name("Stalagg");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(4);
}

void M1796::init() {
}
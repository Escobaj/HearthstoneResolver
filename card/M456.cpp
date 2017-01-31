//
// Created by Jo on 19/12/2016.
//

#include "M456.h"

M456::M456(const EventHandler &e) : Minion(e) {
    this->set_id(456);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Capitaine Vertepeau");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M456::init() {
}
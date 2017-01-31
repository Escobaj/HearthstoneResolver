//
// Created by Jo on 19/12/2016.
//

#include "M680.h"

M680::M680(const EventHandler &e) : Minion(e) {
    this->set_id(680);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Capitaine des mers du Sud");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M680::init() {
}
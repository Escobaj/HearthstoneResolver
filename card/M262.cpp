//
// Created by Jo on 19/12/2016.
//

#include "M262.h"

M262::M262(const EventHandler &e) : Minion(e) {
    this->set_id(262);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("Poulet");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M262::init() {
}
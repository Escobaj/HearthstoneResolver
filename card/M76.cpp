//
// Created by Jo on 19/12/2016.
//

#include "M76.h"

M76::M76(const EventHandler &e) : Minion(e) {
    this->set_id(76);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Diablotin");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M76::init() {
}
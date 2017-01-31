//
// Created by Jo on 19/12/2016.
//

#include "M2774.h"

M2774::M2774(const EventHandler &e) : Minion(e) {
    this->set_id(2774);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Pourfendeur drakônide");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2774::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M19523.h"

M19523::M19523(const EventHandler &e) : Minion(e) {
    this->set_id(19523);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Soigneur honnête");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M19523::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2596.h"

M2596::M2596(const EventHandler &e) : Minion(e) {
    this->set_id(2596);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Agent du Repos du ver");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M2596::init() {
}
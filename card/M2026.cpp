//
// Created by Jo on 19/12/2016.
//

#include "M2026.h"

M2026::M2026(const EventHandler &e) : Minion(e) {
    this->set_id(2026);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Mini-robot blindé");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2026::init() {
}
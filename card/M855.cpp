//
// Created by Jo on 19/12/2016.
//

#include "M855.h"

M855::M855(const EventHandler &e) : Minion(e) {
    this->set_id(855);
    this->set_attackMax(4);
    this->set_defaultCost(2);
    this->set_name("Millhouse Tempête-de-Mana");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M855::init() {
}
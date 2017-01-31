//
// Created by Jo on 19/12/2016.
//

#include "M2030.h"

M2030::M2030(const EventHandler &e) : Minion(e) {
    this->set_id(2030);
    this->set_attackMax(6);
    this->set_defaultCost(5);
    this->set_name("Gardien de cobalt");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(6);
    this->set_maxHealth(3);
}

void M2030::init() {
}
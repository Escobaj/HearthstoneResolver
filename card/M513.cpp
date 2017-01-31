//
// Created by Jo on 19/12/2016.
//

#include "M513.h"

M513::M513(const EventHandler &e) : Minion(e) {
    this->set_id(513);
    this->set_attackMax(0);
    this->set_defaultCost(3);
    this->set_name("Totem de vague de mana");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::TOTEM);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M513::init() {
}
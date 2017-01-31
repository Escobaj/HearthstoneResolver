//
// Created by Jo on 19/12/2016.
//

#include "M2610.h"

M2610::M2610(const EventHandler &e) : Minion(e) {
    this->set_id(2610);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Golem totémique");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::TOTEM);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2610::init() {
}
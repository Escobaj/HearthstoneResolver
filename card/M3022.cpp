//
// Created by Jo on 19/12/2016.
//

#include "M3022.h"

M3022::M3022(const EventHandler &e) : Minion(e) {
    this->set_id(3022);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Cameron Chrisman");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M3022::init() {
}
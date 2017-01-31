//
// Created by Jo on 19/12/2016.
//

#include "M3040.h"

M3040::M3040(const EventHandler &e) : Minion(e) {
    this->set_id(3040);
    this->set_attackMax(7);
    this->set_defaultCost(4);
    this->set_name("Ryan Masterson");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(2);
}

void M3040::init() {
}
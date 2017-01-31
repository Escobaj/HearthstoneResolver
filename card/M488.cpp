//
// Created by Jo on 19/12/2016.
//

#include "M488.h"

M488::M488(const EventHandler &e) : Minion(e) {
    this->set_id(488);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Bandit défias");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M488::init() {
}
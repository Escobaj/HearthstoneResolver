//
// Created by Jo on 19/12/2016.
//

#include "M1754.h"

M1754::M1754(const EventHandler &e) : Minion(e) {
    this->set_id(1754);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Elite Tauren Chieftain");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M1754::init() {
}
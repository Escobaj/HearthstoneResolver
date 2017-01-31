//
// Created by Jo on 19/12/2016.
//

#include "M2333.h"

M2333::M2333(const EventHandler &e) : Minion(e) {
    this->set_id(2333);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("AI Buddy - All Charge!");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2333::init() {
}
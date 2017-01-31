//
// Created by Jo on 19/12/2016.
//

#include "M2217.h"

M2217::M2217(const EventHandler &e) : Minion(e) {
    this->set_id(2217);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("AI Buddy - Damage Own Hero 5");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2217::init() {
}
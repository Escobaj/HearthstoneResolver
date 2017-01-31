//
// Created by Jo on 19/12/2016.
//

#include "M2631.h"

M2631::M2631(const EventHandler &e) : Minion(e) {
    this->set_id(2631);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("AI Buddy - Blank Slate");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2631::init() {
}
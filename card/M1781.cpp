//
// Created by Jo on 19/12/2016.
//

#include "M1781.h"

M1781::M1781(const EventHandler &e) : Minion(e) {
    this->set_id(1781);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Rampante hantée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M1781::init() {
}
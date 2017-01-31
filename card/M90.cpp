//
// Created by Jo on 19/12/2016.
//

#include "M90.h"

M90::M90(const EventHandler &e) : Minion(e) {
    this->set_id(90);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Yéti noroît");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M90::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M672.h"

M672::M672(const EventHandler &e) : Minion(e) {
    this->set_id(672);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Géomancien kobold");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M672::init() {
}
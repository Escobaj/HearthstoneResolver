//
// Created by Jo on 19/12/2016.
//

#include "M715.h"

M715::M715(const EventHandler &e) : Minion(e) {
    this->set_id(715);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Âme en peine de mana");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M715::init() {
}
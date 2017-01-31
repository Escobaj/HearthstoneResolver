//
// Created by Jo on 19/12/2016.
//

#include "M19320.h"

M19320::M19320(const EventHandler &e) : Minion(e) {
    this->set_id(19320);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Mage débutant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M19320::init() {
}
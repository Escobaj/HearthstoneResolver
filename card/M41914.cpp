//
// Created by Jo on 19/12/2016.
//

#include "M41914.h"

M41914::M41914(const EventHandler &e) : Minion(e) {
    this->set_id(41914);
    this->set_attackMax(0);
    this->set_defaultCost(4);
    this->set_name("Dorothée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(10);
}

void M41914::init() {
}
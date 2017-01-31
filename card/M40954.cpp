//
// Created by Jo on 19/12/2016.
//

#include "M40954.h"

M40954::M40954(const EventHandler &e) : Minion(e) {
    this->set_id(40954);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Caïd cambrioleur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M40954::init() {
}
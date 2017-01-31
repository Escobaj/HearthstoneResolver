//
// Created by Jo on 19/12/2016.
//

#include "M614.h"

M614::M614(const EventHandler &e) : Minion(e) {
    this->set_id(614);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Apprentie du sorcier");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M614::init() {
}
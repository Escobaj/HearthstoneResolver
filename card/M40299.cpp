//
// Created by Jo on 19/12/2016.
//

#include "M40299.h"

M40299::M40299(const EventHandler &e) : Minion(e) {
    this->set_id(40299);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Laquais de la Kabale");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M40299::init() {
}
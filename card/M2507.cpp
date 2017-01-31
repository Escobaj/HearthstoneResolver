//
// Created by Jo on 19/12/2016.
//

#include "M2507.h"

M2507::M2507(const EventHandler &e) : Minion(e) {
    this->set_id(2507);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Maître jouteur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M2507::init() {
}
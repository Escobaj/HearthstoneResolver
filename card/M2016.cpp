//
// Created by Jo on 19/12/2016.
//

#include "M2016.h"

M2016::M2016(const EventHandler &e) : Minion(e) {
    this->set_id(2016);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Bondisseur dent-de-métal");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2016::init() {
}
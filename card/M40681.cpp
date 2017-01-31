//
// Created by Jo on 19/12/2016.
//

#include "M40681.h"

M40681::M40681(const EventHandler &e) : Minion(e) {
    this->set_id(40681);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Porte-flingue secoué");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M40681::init() {
}
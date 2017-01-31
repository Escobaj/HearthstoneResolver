//
// Created by Jo on 19/12/2016.
//

#include "M40428.h"

M40428::M40428(const EventHandler &e) : Minion(e) {
    this->set_id(40428);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Le clan des rats");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40428::init() {
}
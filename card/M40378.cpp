//
// Created by Jo on 19/12/2016.
//

#include "M40378.h"

M40378::M40378(const EventHandler &e) : Minion(e) {
    this->set_id(40378);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Agent drakônide");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M40378::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M40425.h"

M40425::M40425(const EventHandler &e) : Minion(e) {
    this->set_id(40425);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Chat tigré");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40425::init() {
}
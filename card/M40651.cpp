//
// Created by Jo on 19/12/2016.
//

#include "M40651.h"

M40651::M40651(const EventHandler &e) : Minion(e) {
    this->set_id(40651);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Mime");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M40651::init() {
}
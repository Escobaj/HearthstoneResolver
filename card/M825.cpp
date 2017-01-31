//
// Created by Jo on 19/12/2016.
//

#include "M825.h"

M825::M825(const EventHandler &e) : Minion(e) {
    this->set_id(825);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Drake azur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M825::init() {
}
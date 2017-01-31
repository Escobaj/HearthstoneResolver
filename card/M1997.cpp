//
// Created by Jo on 19/12/2016.
//

#include "M1997.h"

M1997::M1997(const EventHandler &e) : Minion(e) {
    this->set_id(1997);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Gangrecanon");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M1997::init() {
}
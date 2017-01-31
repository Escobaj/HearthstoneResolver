//
// Created by Jo on 19/12/2016.
//

#include "M40541.h"

M40541::M40541(const EventHandler &e) : Minion(e) {
    this->set_id(40541);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Massacreur abyssal");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M40541::init() {
}
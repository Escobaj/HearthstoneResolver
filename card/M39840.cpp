//
// Created by Jo on 19/12/2016.
//

#include "M39840.h"

M39840::M39840(const EventHandler &e) : Minion(e) {
    this->set_id(39840);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Prince Malchezaar");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M39840::init() {
}
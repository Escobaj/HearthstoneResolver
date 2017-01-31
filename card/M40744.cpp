//
// Created by Jo on 19/12/2016.
//

#include "M40744.h"

M40744::M40744(const EventHandler &e) : Minion(e) {
    this->set_id(40744);
    this->set_attackMax(3);
    this->set_defaultCost(6);
    this->set_name("Ancien des floraisons");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(8);
}

void M40744::init() {
}
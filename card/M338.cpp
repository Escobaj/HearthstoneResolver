//
// Created by Jo on 19/12/2016.
//

#include "M338.h"

M338::M338(const EventHandler &e) : Minion(e) {
    this->set_id(338);
    this->set_attackMax(4);
    this->set_defaultCost(8);
    this->set_name("Grommash Hurlenfer");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(9);
}

void M338::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M1080.h"

M1080::M1080(const EventHandler &e) : Minion(e) {
    this->set_id(1080);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Archimage Antonidas");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(7);
}

void M1080::init() {
}
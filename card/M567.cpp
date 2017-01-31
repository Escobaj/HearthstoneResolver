//
// Created by Jo on 19/12/2016.
//

#include "M567.h"

M567::M567(const EventHandler &e) : Minion(e) {
    this->set_id(567);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Harpie Furie-des-vents");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M567::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M13334.h"

M13334::M13334(const EventHandler &e) : Minion(e) {
    this->set_id(13334);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Chercheuse du Reliquaire");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M13334::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M40617.h"

M40617::M40617(const EventHandler &e) : Minion(e) {
    this->set_id(40617);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Organisatrice de combats");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M40617::init() {
}
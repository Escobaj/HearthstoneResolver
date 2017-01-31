//
// Created by Jo on 19/12/2016.
//

#include "M40494.h"

M40494::M40494(const EventHandler &e) : Minion(e) {
    this->set_id(40494);
    this->set_attackMax(1);
    this->set_defaultCost(6);
    this->set_name("Racketteur de haut vol");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40494::init() {
}
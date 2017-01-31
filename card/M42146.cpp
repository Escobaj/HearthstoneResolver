//
// Created by Jo on 19/12/2016.
//

#include "M42146.h"

M42146::M42146(const EventHandler &e) : Minion(e) {
    this->set_id(42146);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Gangsters, hé ho !");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M42146::init() {
}
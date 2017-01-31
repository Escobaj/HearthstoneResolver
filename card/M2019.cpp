//
// Created by Jo on 19/12/2016.
//

#include "M2019.h"

M2019::M2019(const EventHandler &e) : Minion(e) {
    this->set_id(2019);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Robo-baston");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M2019::init() {
}
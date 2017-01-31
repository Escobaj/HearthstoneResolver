//
// Created by Jo on 19/12/2016.
//

#include "M2552.h"

M2552::M2552(const EventHandler &e) : Minion(e) {
    this->set_id(2552);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Dompteur de béliers");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2552::init() {
}
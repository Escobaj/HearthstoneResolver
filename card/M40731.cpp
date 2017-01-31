//
// Created by Jo on 19/12/2016.
//

#include "M40731.h"

M40731::M40731(const EventHandler &e) : Minion(e) {
    this->set_id(40731);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Assiette");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40731::init() {
}
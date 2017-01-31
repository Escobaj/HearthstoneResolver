//
// Created by Jo on 19/12/2016.
//

#include "M2014.h"

M2014::M2014(const EventHandler &e) : Minion(e) {
    this->set_id(2014);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Roi des bêtes");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M2014::init() {
}
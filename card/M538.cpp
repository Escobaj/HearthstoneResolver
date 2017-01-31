//
// Created by Jo on 19/12/2016.
//

#include "M538.h"

M538::M538(const EventHandler &e) : Minion(e) {
    this->set_id(538);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Fabricante d’armes");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M538::init() {
}
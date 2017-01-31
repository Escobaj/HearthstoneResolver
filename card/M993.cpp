//
// Created by Jo on 19/12/2016.
//

#include "M993.h"

M993::M993(const EventHandler &e) : Minion(e) {
    this->set_id(993);
    this->set_attackMax(8);
    this->set_defaultCost(12);
    this->set_name("Géant des montagnes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M993::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M969.h"

M969::M969(const EventHandler &e) : Minion(e) {
    this->set_id(969);
    this->set_attackMax(0);
    this->set_defaultCost(4);
    this->set_name("Portail d’invocation");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M969::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M1721.h"

M1721::M1721(const EventHandler &e) : Minion(e) {
    this->set_id(1721);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Sylvanas Coursevent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M1721::init() {
}
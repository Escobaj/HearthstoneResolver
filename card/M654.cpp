//
// Created by Jo on 19/12/2016.
//

#include "M654.h"

M654::M654(const EventHandler &e) : Minion(e) {
    this->set_id(654);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Berserker écumant");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M654::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2504.h"

M2504::M2504(const EventHandler &e) : Minion(e) {
    this->set_id(2504);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Jouteur rohart");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2504::init() {
}
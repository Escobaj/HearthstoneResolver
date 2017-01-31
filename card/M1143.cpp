//
// Created by Jo on 19/12/2016.
//

#include "M1143.h"

M1143::M1143(const EventHandler &e) : Minion(e) {
    this->set_id(1143);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Infernal");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M1143::init() {
}
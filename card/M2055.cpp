//
// Created by Jo on 19/12/2016.
//

#include "M2055.h"

M2055::M2055(const EventHandler &e) : Minion(e) {
    this->set_id(2055);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Sniper de Gentepression");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2055::init() {
}
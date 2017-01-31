//
// Created by Jo on 19/12/2016.
//

#include "M2031.h"

M2031::M2031(const EventHandler &e) : Minion(e) {
    this->set_id(2031);
    this->set_attackMax(1);
    this->set_defaultCost(5);
    this->set_name("Bolvar Fordragon");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(7);
}

void M2031::init() {
}
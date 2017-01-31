//
// Created by Jo on 19/12/2016.
//

#include "M2889.h"

M2889::M2889(const EventHandler &e) : Minion(e) {
    this->set_id(2889);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Gardienne d’Uldaman");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2889::init() {
}
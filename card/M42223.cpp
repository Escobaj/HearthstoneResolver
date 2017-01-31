//
// Created by Jo on 19/12/2016.
//

#include "M42223.h"

M42223::M42223(const EventHandler &e) : Minion(e) {
    this->set_id(42223);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Murloc tranche-branchie");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M42223::init() {
}
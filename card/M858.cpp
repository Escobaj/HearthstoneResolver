//
// Created by Jo on 19/12/2016.
//

#include "M858.h"

M858::M858(const EventHandler &e) : Minion(e) {
    this->set_id(858);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Gelbin Mekkanivelle");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M858::init() {
}
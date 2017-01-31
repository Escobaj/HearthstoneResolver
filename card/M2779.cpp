//
// Created by Jo on 19/12/2016.
//

#include "M2779.h"

M2779::M2779(const EventHandler &e) : Minion(e) {
    this->set_id(2779);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Diablotin");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2779::init() {
}
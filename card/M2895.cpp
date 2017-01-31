//
// Created by Jo on 19/12/2016.
//

#include "M2895.h"

M2895::M2895(const EventHandler &e) : Minion(e) {
    this->set_id(2895);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Sinistre colporteur");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2895::init() {
}
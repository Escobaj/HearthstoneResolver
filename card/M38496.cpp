//
// Created by Jo on 19/12/2016.
//

#include "M38496.h"

M38496::M38496(const EventHandler &e) : Minion(e) {
    this->set_id(38496);
    this->set_attackMax(5);
    this->set_defaultCost(10);
    this->set_name("N’Zoth le corrupteur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(7);
}

void M38496::init() {
}
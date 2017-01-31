//
// Created by Jo on 19/12/2016.
//

#include "M38814.h"

M38814::M38814(const EventHandler &e) : Minion(e) {
    this->set_id(38814);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Écumeur du soleil Phaerix");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38814::init() {
}
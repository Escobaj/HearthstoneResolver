//
// Created by Jo on 19/12/2016.
//

#include "M38545.h"

M38545::M38545(const EventHandler &e) : Minion(e) {
    this->set_id(38545);
    this->set_attackMax(2);
    this->set_defaultCost(6);
    this->set_name("Voyant corrompu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M38545::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M38414.h"

M38414::M38414(const EventHandler &e) : Minion(e) {
    this->set_id(38414);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Serviteur de Yogg-Saron");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M38414::init() {
}
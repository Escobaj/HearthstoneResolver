//
// Created by Jo on 19/12/2016.
//

#include "M38898.h"

M38898::M38898(const EventHandler &e) : Minion(e) {
    this->set_id(38898);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Passeuse d’âmes");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M38898::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M38505.h"

M38505::M38505(const EventHandler &e) : Minion(e) {
    this->set_id(38505);
    this->set_attackMax(7);
    this->set_defaultCost(10);
    this->set_name("Yogg-Saron, la fin de l’espoir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(5);
}

void M38505::init() {
}
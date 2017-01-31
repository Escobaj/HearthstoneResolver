//
// Created by Jo on 19/12/2016.
//

#include "M38475.h"

M38475::M38475(const EventHandler &e) : Minion(e) {
    this->set_id(38475);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Déphaseur Zerus");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38475::init() {
}
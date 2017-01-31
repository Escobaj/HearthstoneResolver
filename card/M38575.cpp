//
// Created by Jo on 19/12/2016.
//

#include "M38575.h"

M38575::M38575(const EventHandler &e) : Minion(e) {
    this->set_id(38575);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Cadeau du Voile d’hiver");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M38575::init() {
}
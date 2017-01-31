//
// Created by Jo on 19/12/2016.
//

#include "M38822.h"

M38822::M38822(const EventHandler &e) : Minion(e) {
    this->set_id(38822);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Murloc de la Main d’argent");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38822::init() {
}
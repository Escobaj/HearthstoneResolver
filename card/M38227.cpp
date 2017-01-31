//
// Created by Jo on 19/12/2016.
//

#include "M38227.h"

M38227::M38227(const EventHandler &e) : Minion(e) {
    this->set_id(38227);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Inquisiteur Aileron noir");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M38227::init() {
}
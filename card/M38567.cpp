//
// Created by Jo on 19/12/2016.
//

#include "M38567.h"

M38567::M38567(const EventHandler &e) : Minion(e) {
    this->set_id(38567);
    this->set_attackMax(9);
    this->set_defaultCost(9);
    this->set_name("Sang de l’Ancien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(9);
    this->set_maxHealth(9);
}

void M38567::init() {
}
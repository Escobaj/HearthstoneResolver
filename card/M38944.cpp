//
// Created by Jo on 19/12/2016.
//

#include "M38944.h"

M38944::M38944(const EventHandler &e) : Minion(e) {
    this->set_id(38944);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Lardeur, Perte d’Elwynn");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M38944::init() {
}
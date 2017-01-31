//
// Created by Jo on 19/12/2016.
//

#include "M38722.h"

M38722::M38722(const EventHandler &e) : Minion(e) {
    this->set_id(38722);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Hallazèle l’Élevé");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M38722::init() {
}
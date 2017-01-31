//
// Created by Jo on 19/12/2016.
//

#include "M38452.h"

M38452::M38452(const EventHandler &e) : Minion(e) {
    this->set_id(38452);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Conseiller de Sombre-Comté");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(5);
}

void M38452::init() {
}
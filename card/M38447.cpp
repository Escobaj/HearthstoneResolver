//
// Created by Jo on 19/12/2016.
//

#include "M38447.h"

M38447::M38447(const EventHandler &e) : Minion(e) {
    this->set_id(38447);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Archiviste de Sombre-Comté");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M38447::init() {
}
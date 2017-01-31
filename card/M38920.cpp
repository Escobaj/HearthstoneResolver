//
// Created by Jo on 19/12/2016.
//

#include "M38920.h"

M38920::M38920(const EventHandler &e) : Minion(e) {
    this->set_id(38920);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Adepte de la Voile sanglante");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M38920::init() {
}
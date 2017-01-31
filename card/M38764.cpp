//
// Created by Jo on 19/12/2016.
//

#include "M38764.h"

M38764::M38764(const EventHandler &e) : Minion(e) {
    this->set_id(38764);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Alchimiste de Sombre-Comté");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M38764::init() {
}
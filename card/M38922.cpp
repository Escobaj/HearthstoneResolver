//
// Created by Jo on 19/12/2016.
//

#include "M38922.h"

M38922::M38922(const EventHandler &e) : Minion(e) {
    this->set_id(38922);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Héraut Volazj");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38922::init() {
}
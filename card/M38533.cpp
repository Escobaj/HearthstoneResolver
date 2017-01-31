//
// Created by Jo on 19/12/2016.
//

#include "M38533.h"

M38533::M38533(const EventHandler &e) : Minion(e) {
    this->set_id(38533);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Faucon-dragon difforme");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38533::init() {
}
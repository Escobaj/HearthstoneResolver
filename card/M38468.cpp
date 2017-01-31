//
// Created by Jo on 19/12/2016.
//

#include "M38468.h"

M38468::M38468(const EventHandler &e) : Minion(e) {
    this->set_id(38468);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Mukla, tyran du val");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38468::init() {
}
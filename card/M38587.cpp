//
// Created by Jo on 19/12/2016.
//

#include "M38587.h"

M38587::M38587(const EventHandler &e) : Minion(e) {
    this->set_id(38587);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Statue de terrestre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(5);
}

void M38587::init() {
}
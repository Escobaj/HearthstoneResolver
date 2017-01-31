//
// Created by Jo on 19/12/2016.
//

#include "M38320.h"

M38320::M38320(const EventHandler &e) : Minion(e) {
    this->set_id(38320);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Druide de la Flamme");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38320::init() {
}
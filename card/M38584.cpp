//
// Created by Jo on 19/12/2016.
//

#include "M38584.h"

M38584::M38584(const EventHandler &e) : Minion(e) {
    this->set_id(38584);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Chauve-souris embrasée");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M38584::init() {
}
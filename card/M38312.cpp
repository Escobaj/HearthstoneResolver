//
// Created by Jo on 19/12/2016.
//

#include "M38312.h"

M38312::M38312(const EventHandler &e) : Minion(e) {
    this->set_id(38312);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Y’Shaarj, la rage déchaînée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38312::init() {
}
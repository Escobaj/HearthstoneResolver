//
// Created by Jo on 19/12/2016.
//

#include "M38859.h"

M38859::M38859(const EventHandler &e) : Minion(e) {
    this->set_id(38859);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Annonciatrice du mal");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M38859::init() {
}
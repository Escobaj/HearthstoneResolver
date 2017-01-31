//
// Created by Jo on 19/12/2016.
//

#include "M38569.h"

M38569::M38569(const EventHandler &e) : Minion(e) {
    this->set_id(38569);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Traînard sans-visage");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38569::init() {
}
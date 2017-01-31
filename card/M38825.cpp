//
// Created by Jo on 19/12/2016.
//

#include "M38825.h"

M38825::M38825(const EventHandler &e) : Minion(e) {
    this->set_id(38825);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Face de poulpe");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M38825::init() {
}
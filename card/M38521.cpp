//
// Created by Jo on 19/12/2016.
//

#include "M38521.h"

M38521::M38521(const EventHandler &e) : Minion(e) {
    this->set_id(38521);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Béhémoth sans-visage");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38521::init() {
}
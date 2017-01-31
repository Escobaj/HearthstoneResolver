//
// Created by Jo on 19/12/2016.
//

#include "M38488.h"

M38488::M38488(const EventHandler &e) : Minion(e) {
    this->set_id(38488);
    this->set_attackMax(4);
    this->set_defaultCost(7);
    this->set_name("Empereur jumeau Vek’lor");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M38488::init() {
}
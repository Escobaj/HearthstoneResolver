//
// Created by Jo on 19/12/2016.
//

#include "M38612.h"

M38612::M38612(const EventHandler &e) : Minion(e) {
    this->set_id(38612);
    this->set_attackMax(8);
    this->set_defaultCost(4);
    this->set_name("Garde d’Orsis");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M38612::init() {
}
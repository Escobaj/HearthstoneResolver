//
// Created by Jo on 19/12/2016.
//

#include "M38615.h"

M38615::M38615(const EventHandler &e) : Minion(e) {
    this->set_id(38615);
    this->set_attackMax(10);
    this->set_defaultCost(7);
    this->set_name("Insecte géant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(6);
}

void M38615::init() {
}
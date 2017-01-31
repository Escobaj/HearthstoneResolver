//
// Created by Jo on 19/12/2016.
//

#include "M38680.h"

M38680::M38680(const EventHandler &e) : Minion(e) {
    this->set_id(38680);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Aileron-Géant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38680::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2477.h"

M2477::M2477(const EventHandler &e) : Minion(e) {
    this->set_id(2477);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Acolyte attise-flammes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M2477::init() {
}
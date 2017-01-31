//
// Created by Jo on 19/12/2016.
//

#include "M2692.h"

M2692::M2692(const EventHandler &e) : Minion(e) {
    this->set_id(2692);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Élémentaire de roche");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2692::init() {
}
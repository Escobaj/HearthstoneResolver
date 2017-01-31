//
// Created by Jo on 19/12/2016.
//

#include "M41125.h"

M41125::M41125(const EventHandler &e) : Minion(e) {
    this->set_id(41125);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Élémentaire de fête");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M41125::init() {
}
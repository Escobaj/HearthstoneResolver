//
// Created by Jo on 19/12/2016.
//

#include "M34.h"

M34::M34(const EventHandler &e) : Minion(e) {
    this->set_id(34);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Garde de Lune-d’argent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M34::init() {
}
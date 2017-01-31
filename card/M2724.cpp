//
// Created by Jo on 19/12/2016.
//

#include "M2724.h"

M2724::M2724(const EventHandler &e) : Minion(e) {
    this->set_id(2724);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Gormok l’Empaleur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2724::init() {
}
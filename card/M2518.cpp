//
// Created by Jo on 19/12/2016.
//

#include "M2518.h"

M2518::M2518(const EventHandler &e) : Minion(e) {
    this->set_id(2518);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Favori de la foule");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2518::init() {
}
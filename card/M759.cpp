//
// Created by Jo on 19/12/2016.
//

#include "M759.h"

M759::M759(const EventHandler &e) : Minion(e) {
    this->set_id(759);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Marche-soleil");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M759::init() {
}
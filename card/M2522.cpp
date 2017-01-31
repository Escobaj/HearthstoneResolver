//
// Created by Jo on 19/12/2016.
//

#include "M2522.h"

M2522::M2522(const EventHandler &e) : Minion(e) {
    this->set_id(2522);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Jormungar capturé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(9);
}

void M2522::init() {
}
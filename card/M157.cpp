//
// Created by Jo on 19/12/2016.
//

#include "M157.h"

M157::M157(const EventHandler &e) : Minion(e) {
    this->set_id(157);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Seigneur de l’arène");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M157::init() {
}
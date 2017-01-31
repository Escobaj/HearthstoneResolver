//
// Created by Jo on 19/12/2016.
//

#include "M39232.h"

M39232::M39232(const EventHandler &e) : Minion(e) {
    this->set_id(39232);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Serveur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39232::init() {
}
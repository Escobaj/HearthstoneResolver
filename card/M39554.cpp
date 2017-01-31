//
// Created by Jo on 19/12/2016.
//

#include "M39554.h"

M39554::M39554(const EventHandler &e) : Minion(e) {
    this->set_id(39554);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Biographe de Dédain-du-Néant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M39554::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M39442.h"

M39442::M39442(const EventHandler &e) : Minion(e) {
    this->set_id(39442);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Prêtre du festin");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M39442::init() {
}
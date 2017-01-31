//
// Created by Jo on 19/12/2016.
//

#include "M1364.h"

M1364::M1364(const EventHandler &e) : Minion(e) {
    this->set_id(1364);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Massacreur du temple");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M1364::init() {
}
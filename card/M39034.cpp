//
// Created by Jo on 19/12/2016.
//

#include "M39034.h"

M39034::M39034(const EventHandler &e) : Minion(e) {
    this->set_id(39034);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Ombre mouvante");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M39034::init() {
}
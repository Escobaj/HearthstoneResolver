//
// Created by Jo on 19/12/2016.
//

#include "M1807.h"

M1807::M1807(const EventHandler &e) : Minion(e) {
    this->set_id(1807);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Sombre sectateur");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M1807::init() {
}
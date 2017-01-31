//
// Created by Jo on 19/12/2016.
//

#include "M39033.h"

M39033::M39033(const EventHandler &e) : Minion(e) {
    this->set_id(39033);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Acolyte capuchonnée");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M39033::init() {
}
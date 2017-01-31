//
// Created by Jo on 19/12/2016.
//

#include "M2040.h"

M2040::M2040(const EventHandler &e) : Minion(e) {
    this->set_id(2040);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Boxeur de l’ombre");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2040::init() {
}
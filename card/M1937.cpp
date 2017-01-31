//
// Created by Jo on 19/12/2016.
//

#include "M1937.h"

M1937::M1937(const EventHandler &e) : Minion(e) {
    this->set_id(1937);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Bombardière d’ombre");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M1937::init() {
}
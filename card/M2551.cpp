//
// Created by Jo on 19/12/2016.
//

#include "M2551.h"

M2551::M2551(const EventHandler &e) : Minion(e) {
    this->set_id(2551);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Rejeton des Ombres");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2551::init() {
}
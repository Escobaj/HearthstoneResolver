//
// Created by Jo on 19/12/2016.
//

#include "M985.h"

M985::M985(const EventHandler &e) : Minion(e) {
    this->set_id(985);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Loup alpha redoutable");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M985::init() {
}
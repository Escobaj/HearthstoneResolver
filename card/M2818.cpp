//
// Created by Jo on 19/12/2016.
//

#include "M2818.h"

M2818::M2818(const EventHandler &e) : Minion(e) {
    this->set_id(2818);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Jouteuse de Gadgetzan");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M2818::init() {
}
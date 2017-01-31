//
// Created by Jo on 19/12/2016.
//

#include "M40377.h"

M40377::M40377(const EventHandler &e) : Minion(e) {
    this->set_id(40377);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Guerrier écaille-de-dragon");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M40377::init() {
}
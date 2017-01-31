//
// Created by Jo on 19/12/2016.
//

#include "M2918.h"

M2918::M2918(const EventHandler &e) : Minion(e) {
    this->set_id(2918);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Crapaud énorme");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2918::init() {
}
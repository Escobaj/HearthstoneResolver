//
// Created by Jo on 19/12/2016.
//

#include "M2585.h"

M2585::M2585(const EventHandler &e) : Minion(e) {
    this->set_id(2585);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Régisseur du Colisée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M2585::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M922.h"

M922::M922(const EventHandler &e) : Minion(e) {
    this->set_id(922);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Soldat de Comté-de-l’Or");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M922::init() {
}
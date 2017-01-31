//
// Created by Jo on 19/12/2016.
//

#include "M763.h"

M763::M763(const EventHandler &e) : Minion(e) {
    this->set_id(763);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Défenseur d’Argus");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M763::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M28.h"

M28::M28(const EventHandler &e) : Minion(e) {
    this->set_id(28);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Soldat d’élite kor’kron");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M28::init() {
}
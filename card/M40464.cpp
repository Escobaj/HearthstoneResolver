//
// Created by Jo on 19/12/2016.
//

#include "M40464.h"

M40464::M40464(const EventHandler &e) : Minion(e) {
    this->set_id(40464);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Enragé d’ombre");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(1);
}

void M40464::init() {
}
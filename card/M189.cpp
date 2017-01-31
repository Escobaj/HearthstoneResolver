//
// Created by Jo on 19/12/2016.
//

#include "M189.h"

M189::M189(const EventHandler &e) : Minion(e) {
    this->set_id(189);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Élémentaire de feu");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M189::init() {
}
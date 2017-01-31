//
// Created by Jo on 19/12/2016.
//

#include "M39190.h"

M39190::M39190(const EventHandler &e) : Minion(e) {
    this->set_id(39190);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Méchante sorcière");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M39190::init() {
}
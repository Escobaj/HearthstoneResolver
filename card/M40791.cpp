//
// Created by Jo on 19/12/2016.
//

#include "M40791.h"

M40791::M40791(const EventHandler &e) : Minion(e) {
    this->set_id(40791);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Boucanier porte-grigris");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40791::init() {
}
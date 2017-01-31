//
// Created by Jo on 19/12/2016.
//

#include "M39698.h"

M39698::M39698(const EventHandler &e) : Minion(e) {
    this->set_id(39698);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Fieffé forban");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39698::init() {
}
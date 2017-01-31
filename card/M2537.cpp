//
// Created by Jo on 19/12/2016.
//

#include "M2537.h"

M2537::M2537(const EventHandler &e) : Minion(e) {
    this->set_id(2537);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Écraseur du Vide");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2537::init() {
}
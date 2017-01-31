//
// Created by Jo on 19/12/2016.
//

#include "M2586.h"

M2586::M2586(const EventHandler &e) : Minion(e) {
    this->set_id(2586);
    this->set_attackMax(8);
    this->set_defaultCost(9);
    this->set_name("Anub’arak");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(4);
}

void M2586::init() {
}
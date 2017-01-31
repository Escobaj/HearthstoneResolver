//
// Created by Jo on 19/12/2016.
//

#include "M41126.h"

M41126::M41126(const EventHandler &e) : Minion(e) {
    this->set_id(41126);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Kodo de livraison");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M41126::init() {
}
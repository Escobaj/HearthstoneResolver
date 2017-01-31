//
// Created by Jo on 19/12/2016.
//

#include "M2633.h"

M2633::M2633(const EventHandler &e) : Minion(e) {
    this->set_id(2633);
    this->set_attackMax(4);
    this->set_defaultCost(7);
    this->set_name("Gueule-d’acide");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M2633::init() {
}
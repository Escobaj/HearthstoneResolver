//
// Created by Jo on 19/12/2016.
//

#include "M1144.h"

M1144::M1144(const EventHandler &e) : Minion(e) {
    this->set_id(1144);
    this->set_attackMax(8);
    this->set_defaultCost(9);
    this->set_name("Roi Krush");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M1144::init() {
}
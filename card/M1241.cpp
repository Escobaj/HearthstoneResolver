//
// Created by Jo on 19/12/2016.
//

#include "M1241.h"

M1241::M1241(const EventHandler &e) : Minion(e) {
    this->set_id(1241);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Busard affamé");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M1241::init() {
}
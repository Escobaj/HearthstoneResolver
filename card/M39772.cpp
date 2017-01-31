//
// Created by Jo on 19/12/2016.
//

#include "M39772.h"

M39772::M39772(const EventHandler &e) : Minion(e) {
    this->set_id(39772);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Guerrière orque");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M39772::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M40732.h"

M40732::M40732(const EventHandler &e) : Minion(e) {
    this->set_id(40732);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Guerrière orque");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M40732::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M40391.h"

M40391::M40391(const EventHandler &e) : Minion(e) {
    this->set_id(40391);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Tisse-cristal");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M40391::init() {
}
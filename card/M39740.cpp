//
// Created by Jo on 19/12/2016.
//

#include "M39740.h"

M39740::M39740(const EventHandler &e) : Minion(e) {
    this->set_id(39740);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Diablotin de Malchezaar");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M39740::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M39481.h"

M39481::M39481(const EventHandler &e) : Minion(e) {
    this->set_id(39481);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Gentille grand-mère");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39481::init() {
}
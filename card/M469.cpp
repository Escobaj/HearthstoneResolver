//
// Created by Jo on 19/12/2016.
//

#include "M469.h"

M469::M469(const EventHandler &e) : Minion(e) {
    this->set_id(469);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Diablotin de sang");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(0);
    this->set_maxHealth(1);
}

void M469::init() {
}
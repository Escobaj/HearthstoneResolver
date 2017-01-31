//
// Created by Jo on 19/12/2016.
//

#include "M48.h"

M48::M48(const EventHandler &e) : Minion(e) {
    this->set_id(48);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Marcheur du Vide");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M48::init() {
}
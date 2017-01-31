//
// Created by Jo on 19/12/2016.
//

#include "M1806.h"

M1806::M1806(const EventHandler &e) : Minion(e) {
    this->set_id(1806);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Implorateur du Vide");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M1806::init() {
}
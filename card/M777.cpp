//
// Created by Jo on 19/12/2016.
//

#include "M777.h"

M777::M777(const EventHandler &e) : Minion(e) {
    this->set_id(777);
    this->set_attackMax(3);
    this->set_defaultCost(9);
    this->set_name("Seigneur Jaraxxus");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(3);
    this->set_maxHealth(15);
}

void M777::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2822.h"

M2822::M2822(const EventHandler &e) : Minion(e) {
    this->set_id(2822);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Destrier de l’effroi");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2822::init() {
}
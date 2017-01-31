//
// Created by Jo on 19/12/2016.
//

#include "M475.h"

M475::M475(const EventHandler &e) : Minion(e) {
    this->set_id(475);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Mande-flots murloc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M475::init() {
}
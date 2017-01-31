//
// Created by Jo on 19/12/2016.
//

#include "M2032.h"

M2032::M2032(const EventHandler &e) : Minion(e) {
    this->set_id(2032);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Saute-flaque");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2032::init() {
}
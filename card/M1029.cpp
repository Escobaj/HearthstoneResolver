//
// Created by Jo on 19/12/2016.
//

#include "M1029.h"

M1029::M1029(const EventHandler &e) : Minion(e) {
    this->set_id(1029);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Enseignante pourpre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M1029::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M1370.h"

M1370::M1370(const EventHandler &e) : Minion(e) {
    this->set_id(1370);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Gueule d’acier des oasis");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(7);
}

void M1370::init() {
}
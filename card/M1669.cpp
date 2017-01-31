//
// Created by Jo on 19/12/2016.
//

#include "M1669.h"

M1669::M1669(const EventHandler &e) : Minion(e) {
    this->set_id(1669);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Éclaireur pandaren");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1669::init() {
}
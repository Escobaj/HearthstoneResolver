//
// Created by Jo on 19/12/2016.
//

#include "M2688.h"

M2688::M2688(const EventHandler &e) : Minion(e) {
    this->set_id(2688);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Tranchetripe");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(4);
    this->set_maxHealth(12);
}

void M2688::init() {
}
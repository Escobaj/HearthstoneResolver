//
// Created by Jo on 19/12/2016.
//

#include "M39492.h"

M39492::M39492(const EventHandler &e) : Minion(e) {
    this->set_id(39492);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Chasseresse capuchonnée");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M39492::init() {
}
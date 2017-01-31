//
// Created by Jo on 19/12/2016.
//

#include "M40492.h"

M40492::M40492(const EventHandler &e) : Minion(e) {
    this->set_id(40492);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Lépreux occulte");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(1);
}

void M40492::init() {
}
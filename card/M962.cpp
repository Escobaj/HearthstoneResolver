//
// Created by Jo on 19/12/2016.
//

#include "M962.h"

M962::M962(const EventHandler &e) : Minion(e) {
    this->set_id(962);
    this->set_attackMax(9);
    this->set_defaultCost(6);
    this->set_name("La Bête");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(9);
    this->set_maxHealth(7);
}

void M962::init() {
}
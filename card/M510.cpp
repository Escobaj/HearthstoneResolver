//
// Created by Jo on 19/12/2016.
//

#include "M510.h"

M510::M510(const EventHandler &e) : Minion(e) {
    this->set_id(510);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Oracle sinistrécaille");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M510::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2872.h"

M2872::M2872(const EventHandler &e) : Minion(e) {
    this->set_id(2872);
    this->set_attackMax(1);
    this->set_defaultCost(10);
    this->set_name("Maître des rouages Mécazod");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(80);
}

void M2872::init() {
}
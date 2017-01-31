//
// Created by Jo on 19/12/2016.
//

#include "M2096.h"

M2096::M2096(const EventHandler &e) : Minion(e) {
    this->set_id(2096);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Ourson robot anodisé");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2096::init() {
}
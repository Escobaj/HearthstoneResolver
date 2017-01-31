//
// Created by Jo on 19/12/2016.
//

#include "M2784.h"

M2784::M2784(const EventHandler &e) : Minion(e) {
    this->set_id(2784);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Lion dent-de-sabre");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2784::init() {
}
//
// Created by Jo on 19/12/2016.
//

#include "M2860.h"

M2860::M2860(const EventHandler &e) : Minion(e) {
    this->set_id(2860);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Panthère dent-de-sabre");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2860::init() {
}
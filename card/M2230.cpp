//
// Created by Jo on 19/12/2016.
//

#include "M2230.h"

M2230::M2230(const EventHandler &e) : Minion(e) {
    this->set_id(2230);
    this->set_attackMax(7);
    this->set_defaultCost(5);
    this->set_name("Druide du Croc");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2230::init() {
}
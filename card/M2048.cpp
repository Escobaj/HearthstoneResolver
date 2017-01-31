//
// Created by Jo on 19/12/2016.
//

#include "M2048.h"

M2048::M2048(const EventHandler &e) : Minion(e) {
    this->set_id(2048);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Druide du Croc");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2048::init() {
}
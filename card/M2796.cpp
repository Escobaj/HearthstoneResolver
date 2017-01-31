//
// Created by Jo on 19/12/2016.
//

#include "M2796.h"

M2796::M2796(const EventHandler &e) : Minion(e) {
    this->set_id(2796);
    this->set_attackMax(5);
    this->set_defaultCost(9);
    this->set_name("Aviana");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2796::init() {
}
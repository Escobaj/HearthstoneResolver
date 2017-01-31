//
// Created by Jo on 19/12/2016.
//

#include "M2510.h"

M2510::M2510(const EventHandler &e) : Minion(e) {
    this->set_id(2510);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Grande croisée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2510::init() {
}